#include "onewordtest.h"
#include "ui_onewordtest.h"
#include <QMessageBox>
#include <QDebug>
#include"userloginsystem.h"
#include "userfront.h"
oneWordTest::oneWordTest(QString& user,const QString& topic, const QString& questionType, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::oneWordTest),currentUserName(user),score(0)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    quizManager = new QuizManager;
    currentIndex = 0;
    QString filename = "questions_" + topic + ".txt";

    if (!quizManager->loadQuestions(filename, questionType)) {
        QMessageBox::critical(this, "Error", "Failed to load questions.");
        return;
    }

    quizManager->selectRandomQuestions(5); // Change the number as needed
    totalQuestions = quizManager->getSelectedQuestions().size();

    // Set up the timer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &oneWordTest::updateTimer);

    loadNextQuestion();
}

oneWordTest::~oneWordTest()
{
    delete ui;
    delete timer;
}

void oneWordTest::loadNextQuestion() {
    ui->answerline->clear();
    timeRemaining = 15;
    ui->timerLabel->setText("Time Left: " + QString::number(timeRemaining) + "s");

    if (currentIndex < quizManager->getSelectedQuestions().size()) {
        Question *q = quizManager->getSelectedQuestions().at(currentIndex);
        OneWordQuestion *owq = dynamic_cast<OneWordQuestion*>(q);

        if (owq) {
            ui->label->setText(owq->questionText);
            correctAnswer = owq->correctAnswer.trimmed(); // Store correct answer here
            qDebug() << "Loaded Question: " << owq->questionText;
            qDebug() << "Correct Answer Set: [" << correctAnswer << "]";
        } else {
            qDebug() << "Error: Question type mismatch!";
        }

        timer->start(1000); // Start countdown
    }
}


void oneWordTest::checkAnswer() {
    QString userAnswer = ui->answerline->text().trimmed();
    qDebug() << userAnswer;
    qDebug() << correctAnswer;

    if (userAnswer.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please enter an answer.");
        return;
    }

    if (userAnswer.compare(correctAnswer, Qt::CaseInsensitive) == 0) {
        score++;
        QMessageBox::information(this, "Correct!", "Your answer is correct!");
    } else {
        QMessageBox::critical(this, "Wrong!", "Incorrect answer. The correct answer is: " + correctAnswer);
    }

    proceedToNextQuestion();
}

void oneWordTest::updateTimer() {
    timeRemaining--;
    ui->timerLabel->setText("Time Left: " + QString::number(timeRemaining) + "s");

    if (timeRemaining == 0) {
        timer->stop();
        QMessageBox::critical(this, "Time's Up!", "You ran out of time! The correct answer was: " + correctAnswer);
        proceedToNextQuestion();
    }
}

void oneWordTest::proceedToNextQuestion() {
    answeredQuestions++;
    updateProgressBar();
    updateScoreDisplay();

    currentIndex++;
    if (currentIndex < totalQuestions) {
        loadNextQuestion(); // Load next question
    } else {
        QMessageBox::information(this, "Quiz Finished", "You have completed the quiz!");
        QMessageBox::information(this, "Quiz Finished", "Final Score: " + QString::number(score));
        UserFront* u=new UserFront(currentUserName);
        u->show();
        this->hide();
    }
}

void oneWordTest::updateScoreDisplay() {
    ui->scoreLabel->setText("Score: " + QString::number(score));  // Update the score label
}

void oneWordTest::updateProgressBar() {
    int percentage = (answeredQuestions * 100) / totalQuestions;
    ui->progressBar->setValue(percentage);
}

void oneWordTest::on_pushButton_clicked()
{
    timer->stop(); // Stop the timer when user submits an answer
    checkAnswer();
}


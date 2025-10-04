#include "testwindow.h"
#include "ui_testwindow.h"
#include<QMessageBox>
#include"userloginsystem.h"
#include"userfront.h"
testWindow::testWindow(QString& user,const QString& topic, const QString& questionType, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testWindow),
    score(0),
    answeredQuestions(0),
    currentIndex(0),currentUserName(user)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    quizManager = new QuizManager;
    timer = new QTimer(this);

    QString filename = "questions_" + topic + ".txt"; // Example: "math.txt"

    if (!quizManager->loadQuestions(filename, questionType)) {
        QMessageBox::critical(this, "Error", "Failed to load questions.");
        return;
    }

    quizManager->selectRandomQuestions(5); // Change as needed
    totalQuestions = quizManager->getSelectedQuestions().size();

    connect(timer, &QTimer::timeout, this, &testWindow::updateTimer);

    loadAndStartQuiz();
}

testWindow::~testWindow()
{
    delete quizManager;
    delete timer;
    delete ui;
}

void testWindow::loadAndStartQuiz()
{
    if (currentIndex < totalQuestions) {
        Question *q = quizManager->getSelectedQuestions().at(currentIndex);
        MCQQuestion *mcq = dynamic_cast<MCQQuestion*>(q);

        if (mcq) {
            ui->questionLabel->setText(mcq->questionText);

            auto options = mcq->getOptions();
            ui->op1->setText(options[0]);
            ui->op2->setText(options[1]);
            ui->op3->setText(options[2]);
            ui->op4->setText(options[3]);

            ui->op1->setVisible(true);
            ui->op2->setVisible(true);
            ui->op3->setVisible(true);
            ui->op4->setVisible(true);

            correctAnswer = mcq->getCorrectAnswer();

            ui->op1->setAutoExclusive(false);
            ui->op2->setAutoExclusive(false);
            ui->op3->setAutoExclusive(false);
            ui->op4->setAutoExclusive(false);

            ui->op1->setChecked(false);
            ui->op2->setChecked(false);
            ui->op3->setChecked(false);
            ui->op4->setChecked(false);

            ui->op1->setAutoExclusive(true);
            ui->op2->setAutoExclusive(true);
            ui->op3->setAutoExclusive(true);
            ui->op4->setAutoExclusive(true);

            // Reset and Start Timer
            timeRemaining = 10;  // Set to 30 seconds per question
            ui->timerLabel->setText("Time Left: " + QString::number(timeRemaining) + "s");
            timer->start(1000);  // Run every second
        }
    } else {
        QMessageBox::information(this, "Test Finished", "You have completed the test!");
        QMessageBox::information(this, "Quiz Finished", "Final Score: " + QString::number(score));
        UserFront* u=new UserFront(currentUserName);
        u->show();
        this->hide();

    }
}

void testWindow::updateTimer()
{
    timeRemaining--;

    if (timeRemaining >= 0) {
        ui->timerLabel->setText("Time Left: " + QString::number(timeRemaining) + "s");
    }

    if (timeRemaining == 0) {
        timer->stop();
        timeUp();  // Handle timeout case
    }
}

void testWindow::timeUp()
{
    QMessageBox::critical(this, "Time's Up!", "You ran out of time! Moving to the next question.");
    answeredQuestions++;

    updateProgressBar();
    updateScoreDisplay();

    currentIndex++;

    if (currentIndex < totalQuestions) {
        loadAndStartQuiz();
    } else {
        QMessageBox::information(this, "Test Finished", "You have completed the test!");
       QMessageBox::information(this, "Quiz Finished", "Final Score: " + QString::number(score));
        UserFront* u=new UserFront(currentUserName);
        u->show();
        this->hide();
    }
}


void testWindow::on_submit_clicked()
{
    QString selectedAnswer;

    if (ui->op1->isChecked()) {
        selectedAnswer = ui->op1->text();
    } else if (ui->op2->isChecked()) {
        selectedAnswer = ui->op2->text();
    } else if (ui->op3->isChecked()) {
        selectedAnswer = ui->op3->text();
    } else if (ui->op4->isChecked()) {
        selectedAnswer = ui->op4->text();
    } else {
        QMessageBox::warning(this, "Warning", "Please select an answer before submitting.");
        return;
    }

    timer->stop();

    if (selectedAnswer == correctAnswer) {
        score++;
        QMessageBox::information(this, "Correct!", "Your answer is correct!");
    } else {
        QMessageBox::critical(this, "Wrong!", "Your answer is incorrect. The correct answer is: " + correctAnswer);
    }

    answeredQuestions++;

    updateProgressBar();
    updateScoreDisplay();

    currentIndex++;

    if (currentIndex < totalQuestions) {
        loadAndStartQuiz();
    } else {
        QMessageBox::information(this, "Test Finished", "You have completed the test!");
        QMessageBox::information(this, "Quiz Finished", "Final Score: " + QString::number(score));
        UserFront* u=new UserFront(currentUserName);
        u->show();
        this->hide();
    }
}

void testWindow::updateScoreDisplay()
{
    ui->scoreLabel->setText("Score: " + QString::number(score));
}

void testWindow::updateProgressBar()
{
    int percentage = (answeredQuestions * 100) / totalQuestions;
    ui->progressBar->setValue(percentage);
}

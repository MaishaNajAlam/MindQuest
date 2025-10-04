#include "onewordpractice.h"
#include "ui_onewordpractice.h"
#include<QMessageBox>
#include<QDebug>
#include"userloginsystem.h"
#include "userfront.h"
OneWordPractice::OneWordPractice(QString& user,const QString& topic, const QString& questionType, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OneWordPractice),score(0),
    currentIndex(0),answeredQuestions(0),currentUserName(user)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    quizManager =new QuizManager;
    currentIndex=0;
    QString filename = "questions_"+topic+ ".txt";


    if (!quizManager->loadQuestions(filename,questionType)) {
        QMessageBox::critical(this, "Error", "Failed to load questions.");
        return;
    }
    quizManager->selectRandomQuestions(5);

    totalQuestions = quizManager->getSelectedQuestions().size();

    loadNextQuestion();
}

OneWordPractice::~OneWordPractice()
{
    delete ui;
}

void OneWordPractice::loadNextQuestion(){
    ui->answerline->clear();
    if (currentIndex < quizManager->getSelectedQuestions().size()) {
        Question *q = quizManager->getSelectedQuestions().at(currentIndex);
        OneWordQuestion *owq = dynamic_cast<OneWordQuestion*>(q);

        if (owq) {
            ui->label->setText(owq->questionText);
            correctAnswer = owq->correctAnswer.trimmed();
        } else {
            qDebug() << "Error: Question type mismatch!";
        }
    }
}

void OneWordPractice::on_submitButton_clicked()
 {
    QString userAnswer = ui->answerline->text().trimmed();

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

    answeredQuestions++;
    updateProgressBar();
    updateScoreDisplay();

    currentIndex++;
    if (currentIndex < totalQuestions) {
       loadNextQuestion();
    } else {
        QMessageBox::information(this, "Quiz Finished", "You have completed the quiz!");
        QMessageBox::information(this, "Quiz Finished", "Final Score: " + QString::number(score));
        UserFront* u=new UserFront(currentUserName);
        u->show();
        this->hide();
    }

    loadNextQuestion();
 }
 void OneWordPractice::updateScoreDisplay()
 {
     ui->scorelabel->setText("Score: " + QString::number(score));  // Update the score label
 }

 void OneWordPractice::updateProgressBar()
 {
     int percentage = (answeredQuestions * 100) / totalQuestions;
     ui->progressBar->setValue(percentage);
 }

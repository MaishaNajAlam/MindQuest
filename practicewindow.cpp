#include "practicewindow.h"
#include "ui_practicewindow.h"
#include<QMessageBox>
#include"userloginsystem.h"
#include "userfront.h"
practiceWindow::practiceWindow(QString& user,const QString& topic, const QString& questionType, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::practiceWindow),score(0),
    answeredQuestions(0),currentUserName(user)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
    quizManager =new QuizManager;
    currentIndex=0;
    QString filename = "questions_"+topic+ ".txt"; // Example: "math.txt"


    if (!quizManager->loadQuestions(filename,questionType)) {
        QMessageBox::critical(this, "Error", "Failed to load questions.");
        return;
    }
    quizManager->selectRandomQuestions(5); // Change the number as needed

    totalQuestions = quizManager->getSelectedQuestions().size();

    loadAndStartQuiz();

}

practiceWindow::~practiceWindow()
{
    delete quizManager;
    delete ui;
}

void practiceWindow::loadAndStartQuiz(){
    if (currentIndex < quizManager->getSelectedQuestions().size()) {
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
        }
    } else {
        QMessageBox::information(this, "Quiz Finished", "You have completed the quiz!");
        QMessageBox::information(this, "Quiz Finished", "Final Score: " + QString::number(score));
        UserFront* u=new UserFront(currentUserName);
        u->show();
        this->hide();
    }
}



void practiceWindow::on_submit_clicked()
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

    if (selectedAnswer == correctAnswer) {
        score++;  // Increase the score for correct answer
        QMessageBox::information(this, "Correct!", "Your answer is correct!");
    } else {

        QMessageBox::critical(this, "Wrong!", "Your answer is incorrect. The correct answer is: " + correctAnswer);
    }

    answeredQuestions++;  // Increase the counter for answered questions


    updateProgressBar();


    updateScoreDisplay();


    currentIndex++;


    if (currentIndex < totalQuestions) {
        loadAndStartQuiz();  // Load next question
    } else {
        QMessageBox::information(this, "Quiz Finished", "You have completed the quiz!");
        QMessageBox::information(this, "Quiz Finished", "Final Score: " + QString::number(score));
        UserFront* u=new UserFront(currentUserName);
        u->show();
        this->hide();
    }
}


void practiceWindow::updateScoreDisplay()
{
    ui->scoreLabel->setText("Score: " + QString::number(score));  // Update the score label
}

void practiceWindow::updateProgressBar()
{
    int percentage = (answeredQuestions * 100) / totalQuestions;
    ui->progressBar->setValue(percentage);
}





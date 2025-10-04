#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "quizmanager.h"
#include "leaderboard.h"
#include <QMessageBox>

GameWindow::GameWindow(QString user,QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::GameWindow),
    score(0),
    answeredQuestions(0),playerName(user)
{
    ui->setupUi(this);
    quizManager = new QuizManager();
    currentIndex = 0;
    ui->progressBar->setValue(0);


    if (!quizManager->loadQuestions("questions.txt", "MCQ")) {
        QMessageBox::critical(this, "Error", "Failed to load questions.");
        return;
    }


    quizManager->selectRandomQuestions(5);

    totalQuestions = quizManager->getSelectedQuestions().size();

    loadAndStartQuiz();
}

GameWindow::~GameWindow()
{
    delete quizManager;
    delete ui;
}
void GameWindow::loadAndStartQuiz()
{
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
        finishGame();
    }
}
void GameWindow::on_submit_clicked()
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
        score++;
        QMessageBox::information(this, "Correct!", "Your answer is correct!");
    }  else {
        QMessageBox::critical(this, "Wrong!", "Your answer is incorrect. The correct answer is: " + correctAnswer);
        finishGame();
    }


    answeredQuestions++;
    updateProgressBar();
    updateScoreDisplay();
    currentIndex++;


    if (currentIndex < totalQuestions) {
        loadAndStartQuiz();
    } else {
        finishGame();
    }
}

void GameWindow::on_button50_clicked()
{
    if (lifeline5050Used) {
        QMessageBox::warning(this, "Lifeline Used", "You have already used the 50:50 lifeline.");
        return;
    }

    MCQQuestion *mcq = dynamic_cast<MCQQuestion*>(quizManager->getSelectedQuestions().at(currentIndex));
    if (!mcq) return;

    auto options = mcq->getOptions();
    QString correct = mcq->getCorrectAnswer();
    QVector<QRadioButton*> radioButtons = {ui->op1, ui->op2, ui->op3, ui->op4};
    QVector<int> incorrectIndexes;

    for (int i = 0; i < 4; i++) {
        if (options[i] != correct) {
            incorrectIndexes.push_back(i);
        }
    }

    std::random_shuffle(incorrectIndexes.begin(), incorrectIndexes.end());
    if (incorrectIndexes.size() >= 2) {
        radioButtons[incorrectIndexes[0]]->setVisible(false);
        radioButtons[incorrectIndexes[1]]->setVisible(false);
    }

    lifeline5050Used = true;
    ui->button50->setVisible(false);
}


void GameWindow::on_buttonSwap_clicked()
{
    if (swapQUsed) {
        QMessageBox::warning(this, "Lifeline Used", "You have already used the Swap lifeline.");
        return;
    }

    quizManager->swapQuestion(currentIndex);
    loadAndStartQuiz();

    swapQUsed = true;
    ui->buttonSwap->setVisible(false);

}
void GameWindow::updateScoreDisplay()
{
    ui->scoreLabel->setText("Score: " + QString::number(score));
}

void GameWindow::updateProgressBar()
{
    int percentage = (answeredQuestions * 100) / totalQuestions;
    ui->progressBar->setValue(percentage);
}

void GameWindow::finishGame() {
    leaderboard.addScore(playerName, score);

    QMessageBox::information(this, "Quiz Finished", "Final Score: " + QString::number(score));

    BoardWindow *lbWindow = new BoardWindow(playerName, score);
    lbWindow->show();

    this->close();
}







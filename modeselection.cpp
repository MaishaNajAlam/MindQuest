#include "modeselection.h"
#include "ui_modeselection.h"
#include "topicselection.h"
#include "quizstart.h"
#include<QKeyEvent>

ModeSelection::ModeSelection(QString user,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ModeSelection),currentUserName(user)
{
    ui->setupUi(this);
    ui->GameButton->setChecked(true);
}

ModeSelection::~ModeSelection()
{
    delete ui;
}

void ModeSelection::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        if (ui->GameButton->isChecked()) {
            onGameModeSelected();
        } else if (ui->TestButton->isChecked()) {
            onTestModeSelected();
        } else if (ui->PracticeButton->isChecked()) {
            onPracticeModeSelected();
        }
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

void ModeSelection::navigateToNextScreen(QString& mode)
{
    if (mode == "Test" || mode == "Practice") {
        TopicSelection *topicScreen = new TopicSelection(currentUserName,mode);
        topicScreen->show();
        this->hide();
    } else {
        // Directly go to the quiz for Game mode
        QString topic="Combined";
        QString type="MCQ";
        QuizStart* quiz=new QuizStart(currentUserName,mode,topic,type);
        quiz->show();
        this->hide();

    }
}

void ModeSelection::onGameModeSelected()
{
    QString mode = "Game";
    navigateToNextScreen(mode);

}

void ModeSelection::onTestModeSelected()
{
    QString mode = "Test";
    navigateToNextScreen(mode);
}

void ModeSelection::onPracticeModeSelected()
{
      QString mode = "Practice";
    navigateToNextScreen(mode);
}




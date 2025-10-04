#include "quizstart.h"
#include "ui_quizstart.h"
#include "gamewindow.h"
#include "practicewindow.h"
#include "onewordpractice.h"
#include "testwindow.h"
#include "onewordtest.h"
#include<QMessageBox>

QuizStart::QuizStart(QString& user,QString& mode,QString& topic,QString& type,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QuizStart),currentUserName(user),Mode(mode),Topic(topic),questype(type)
{
    ui->setupUi(this);
    ui->label_mode->setText(mode);
    ui->label_topic->setText(topic);
    ui->label_type->setText(type);
}

QuizStart::~QuizStart()
{
    delete ui;
}

void QuizStart::on_pushButton_clicked()
{
    if(Mode=="Game"){
        GameWindow* game=new GameWindow(currentUserName);
        game->show();
        this->hide();
    }
    else {
        if (Topic.isEmpty()) {
            QMessageBox::warning(this, "Selection Error", "Please select a topic.");
            return;
        }

        if (questype == "MCQ") {
            if (Mode == "Practice") {
                practiceWindow* p = new practiceWindow(currentUserName,Topic, questype);
                p->show();
            }
            else if (Mode == "Test") {
                testWindow* t = new testWindow(currentUserName,Topic, questype);
                t->show();
            }
        }
        else if (questype == "OneWord") {
            if (Mode == "Practice") {
                OneWordPractice* op = new OneWordPractice(currentUserName,Topic, questype);
                op->show();
            }
            else if (Mode == "Test") {
                oneWordTest* ot = new oneWordTest(currentUserName,Topic, questype);
                ot->show();
            }
        }

        this->hide();
    }

}


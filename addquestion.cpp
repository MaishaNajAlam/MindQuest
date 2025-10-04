#include "addquestion.h"
#include "ui_addquestion.h"
#include"admin.h"
#include"adminwindow.h"
addquestion::addquestion(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::addquestion)
{
    ui->setupUi(this);
}

addquestion::~addquestion()
{
    delete ui;
}
void addquestion::on_pushButton_add_clicked()
{
    Admin admin;
    admin.addQuestion(
        ui->lineEdit_topic,
        ui->lineEdit_q,
        ui->lineEdit_opA,
        ui->lineEdit_opB,
        ui->lineEdit_opC,
        ui->lineEdit_opD,
        ui->lineEdit_corr);
    adminWindow *adminWin = new adminWindow();
    adminWin->show();
    this->close();
}

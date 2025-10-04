#include "addtopic.h"
#include "ui_addtopic.h"
#include"admin.h"
#include"adminwindow.h"
addtopic::addtopic(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::addtopic)
{
    ui->setupUi(this);
}

addtopic::~addtopic()
{
    delete ui;
}
void addtopic::on_pushButton_addt_clicked()
{
    Admin admin;
    admin.addTopic(ui->lineEdit_addt, ui->label_addt,ui->pushButton_addt);
    adminWindow *adminWin = new adminWindow();
    adminWin->show();
    this->close();
}

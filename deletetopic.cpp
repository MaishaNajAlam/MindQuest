#include "deletetopic.h"
#include "ui_deletetopic.h"
#include"admin.h"
#include"adminwindow.h"
deletetopic::deletetopic(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::deletetopic)
{
    ui->setupUi(this);
}

deletetopic::~deletetopic()
{
    delete ui;
}

void deletetopic::on_pushButton_dt_clicked()
{
    Admin admin;
    admin.deleteTopic(ui->lineEdit_dt, ui->label_dt,ui->pushButton_dt);
    adminWindow *adminWin = new adminWindow();
    adminWin->show();
    this->close();
}


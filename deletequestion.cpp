#include "deletequestion.h"
#include "ui_deletequestion.h"
#include"adminwindow.h"
deletequestion::deletequestion(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::deletequestion)
{
    ui->setupUi(this);
}

deletequestion::~deletequestion()
{
    delete ui;
}
void deletequestion::on_pushButton_dq_clicked()
{
    Admin admin;
    admin.deleteQuestionByLineNumber(ui->lineEdit_dq, ui->lineEdit_dq2);
    adminWindow *adminWin = new adminWindow();
    adminWin->show();
    this->close();
}

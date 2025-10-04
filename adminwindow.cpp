#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "addquestion.h"
#include"admin.h"
#include"addtopic.h"
#include"deletetopic.h"
#include"deletequestion.h"
#include "homepage.h"

adminWindow::adminWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::adminWindow)
{
    ui->setupUi(this);
}

adminWindow::~adminWindow()
{
    delete ui;
}

void adminWindow::on_pushButton_addquestion_clicked()
{
    addquestion* addq=new addquestion;
    addq->show();
    this->hide();
}
void adminWindow::on_pushButton_addtopic_clicked()
{
    addtopic *a =new addtopic;
    a->show();
    this->hide();
}
void adminWindow::on_pushButton_deletetopic_clicked()
{
    deletetopic *d =new deletetopic;
    d->show();
    this->hide();
}
void adminWindow::on_pushButton_deletequestion_clicked()
{
    deletequestion *d =new deletequestion;
    d->show();
    this->hide();
}




void adminWindow::on_pushButton_clicked()
{
    HomePage* h=new HomePage;
    h->show();
    this->hide();
}


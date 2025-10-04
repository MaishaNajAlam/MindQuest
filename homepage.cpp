#include "homepage.h"
#include "ui_homepage.h"
#include "userloginsystem.h"
#include "loginwindow.h"
#include <QKeyEvent>
#include <QMessageBox>

HomePage::HomePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);

    ui->UserButton->setChecked(true);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_Return || event->key()==Qt::Key_Enter){
        if(ui->UserButton->isChecked()){

            UserLoginSystem* userWin=new UserLoginSystem();
            userWin->show();
            this->hide();
        }
        else if(ui->AdminButton->isChecked()){
            loginWindow* adminWin=new loginWindow();
            adminWin->show();
            this->hide();
        }
    }

    QMainWindow::keyPressEvent(event);
}

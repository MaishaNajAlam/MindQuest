#include "userloginsystem.h"
#include "ui_userloginsystem.h"
#include "loginwindow.h"
#include "signupwindow.h"
#include <QKeyEvent>
#include <QMessageBox>
#include"HomePage.h"
UserLoginSystem::UserLoginSystem(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserLoginSystem)
{
    ui->setupUi(this);

    ui->UserLogin->setChecked(true);
}

UserLoginSystem::~UserLoginSystem()
{
    delete ui;
}

void UserLoginSystem::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        if (ui->UserLogin->isChecked()) {
            loginWindow* userLogin=new loginWindow();
            userLogin->show();
            this->hide();
        }
        else if (ui->UserSignup->isChecked()) {
            SignUpWindow* userNew=new SignUpWindow();
            userNew->show();
            this->hide();
        }
        else {
            QMessageBox::warning(this, "Warning", "Please select an option.");
        }
    }
    // Call base class key event
    QMainWindow::keyPressEvent(event);
}
void UserLoginSystem::on_pushButton_clicked()
{
    HomePage *h = new HomePage;
    h->show();
    this->hide();
}

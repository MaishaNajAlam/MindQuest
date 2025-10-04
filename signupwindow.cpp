#include "signupwindow.h"
#include "ui_signupwindow.h"
#include "User.h"
#include<QMessageBox>
#include <QKeyEvent>
#include"userloginsystem.h"
SignUpWindow::SignUpWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SignUpWindow)
{
    ui->setupUi(this);
    ui->PasswordlineEdit->setEchoMode(QLineEdit::Password);
    ui->ConfirmPass->setEchoMode(QLineEdit::Password);
}

SignUpWindow::~SignUpWindow()
{
    delete ui;
}

void SignUpWindow::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        handleSignup();  // Trigger login on Enter key press
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

void SignUpWindow::handleSignup()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->PasswordlineEdit->text();
    QString email=ui->emailedit->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Signup Failed", "Please enter both username and password.");
        return;
    }

    User user;
    user.setUsername(username);
    user.setPassword(password);
    user.setEmail(email);
    user.signUp();


    UserLoginSystem* userWin=new UserLoginSystem();
    userWin->show();
    this->hide();
}

#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "admin.h"
#include "user.h"
#include "userfront.h"
#include<QMessageBox>
#include"adminwindow.h"
loginWindow::loginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    ui->User->setChecked(true);
    ui->passwordlineEdit->setEchoMode(QLineEdit::Password);

}

loginWindow::~loginWindow()
{
    delete ui;
}
void loginWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
        handleLogin();  // Trigger login on Enter key press
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
void loginWindow::handleLogin()
{
    QString username = ui->usernamelineEdit->text();
    QString password = ui->passwordlineEdit->text();


    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Login Failed", "Please enter both username and password.");
        return;
    }

    if (ui->Admin_radio->isChecked()) {
        Admin admin;
        if (admin.login(username, password)) {
            adminWindow *adminWin = new adminWindow();
            adminWin->show();
            this->close();
        }
    } else {
        User user;
        user.setUsername(username);
        user.setPassword(password);
        if (user.login(username,password)) {
            UserFront *userWin = new UserFront(username);
            userWin->show();
            this->hide();
        } else {
            QMessageBox::critical(this, "Login Failed", "Invalid username or password.");
        }
    }
}

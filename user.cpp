#include "User.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

void User::signUp() {
    QMap<QString, QString> database = loadCredentials();
    if (database.contains(username)){
        QMessageBox::critical(nullptr, "Sign up Failed","User Exists");
        return;
    }
    else{
        QMessageBox::information(nullptr, "Signup Successful", "User registered successfully.");
    }

    storeCredentials();
}

bool User::login(const QString& inputUsername, const QString& inputPassword) {
    QMap<QString, QString> database = loadCredentials();

    if (database.contains(inputUsername) && database[inputUsername] == inputPassword) {
        QMessageBox::information(nullptr, "Login Successful", "Welcome, " + inputUsername + "!");
        return true;
    } else {
        QMessageBox::critical(nullptr, "Login Failed", "Invalid username or password.");
        return false;
    }
}


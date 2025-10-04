#ifndef ADMIN_H
#define ADMIN_H

#include <QString>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <iostream>

class Admin {
public:
    void signUp();
    bool login(const QString& inputUsername, const QString& inputPassword);
    void addQuestion(QLineEdit* lineEdit_topic, QLineEdit* lineEdit_q, QLineEdit* lineEdit_opA, QLineEdit* lineEdit_opB, QLineEdit* lineEdit_opC, QLineEdit* lineEdit_opD, QLineEdit* lineEdit_corr);
    void addTopic(QLineEdit* lineEdit_addt, QLabel* label_addt, QPushButton* pushButton_addt);
    void deleteTopic(QLineEdit* lineEdit_dt, QLabel* label_dt, QPushButton* pushButton_dt);
    void deleteQuestionByLineNumber(QLineEdit* lineEdit_topic, QLineEdit* lineEdit_number) ;
private:
    class ErrorHandler {
    public:
        static void throwError(const QString& message) {
            throw std::runtime_error(message.toStdString());
        }
    };
};

#endif

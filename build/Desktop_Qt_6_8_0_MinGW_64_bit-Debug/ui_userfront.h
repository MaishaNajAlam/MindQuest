/********************************************************************************
** Form generated from reading UI file 'userfront.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFRONT_H
#define UI_USERFRONT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserFront
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *profileButton;
    QPushButton *startButton;
    QPushButton *pushButton;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserFront)
    {
        if (UserFront->objectName().isEmpty())
            UserFront->setObjectName("UserFront");
        UserFront->resize(800, 600);
        UserFront->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        centralwidget = new QWidget(UserFront);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(190, 220, 411, 251));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    background-color: white;\n"
"    border: 2px solid rgb(104, 90, 180); \n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton {\n"
"    background-color: rgb(104, 90, 180); \n"
"    color: white;\n"
"    border: 2px solid rgb(80, 70, 150); \n"
"    border-radius: 5px;\n"
"    padding: 8px;\n"
"    font-size: 12pt;\n"
"    font-weight: bold;\n"
"}"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 30, 311, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        profileButton = new QPushButton(layoutWidget);
        profileButton->setObjectName("profileButton");

        verticalLayout->addWidget(profileButton);

        startButton = new QPushButton(layoutWidget);
        startButton->setObjectName("startButton");

        verticalLayout->addWidget(startButton);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 190, 91, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 60, 461, 81));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("selection-color: rgb(104, 90, 180);"));
        UserFront->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserFront);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        UserFront->setMenuBar(menubar);
        statusbar = new QStatusBar(UserFront);
        statusbar->setObjectName("statusbar");
        UserFront->setStatusBar(statusbar);

        retranslateUi(UserFront);

        QMetaObject::connectSlotsByName(UserFront);
    } // setupUi

    void retranslateUi(QMainWindow *UserFront)
    {
        UserFront->setWindowTitle(QCoreApplication::translate("UserFront", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        profileButton->setText(QCoreApplication::translate("UserFront", "Profile", nullptr));
        startButton->setText(QCoreApplication::translate("UserFront", "Start Quiz", nullptr));
        pushButton->setText(QCoreApplication::translate("UserFront", "LogOut", nullptr));
        label_3->setText(QCoreApplication::translate("UserFront", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; color:#404f96;\">Welcome to MINDQUEST</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserFront: public Ui_UserFront {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFRONT_H

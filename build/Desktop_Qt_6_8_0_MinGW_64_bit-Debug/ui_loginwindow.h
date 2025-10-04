/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_login;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *Admin_radio;
    QRadioButton *User;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *usernamelineEdit;
    QLineEdit *passwordlineEdit;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName("loginWindow");
        loginWindow->resize(800, 600);
        loginWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(loginWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_login = new QGroupBox(centralwidget);
        groupBox_login->setObjectName("groupBox_login");
        groupBox_login->setGeometry(QRect(100, 190, 591, 311));
        groupBox_login->setStyleSheet(QString::fromUtf8("/* Main window background */\n"
"QMainWindow {\n"
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"}\n"
"\n"
"/* Group boxes */\n"
"QGroupBox {\n"
"    background-color: rgb(255, 255, 255); /* White background */\n"
"    border: 2px solid rgb(104, 90, 180); /* Purple border */\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* QLabel - general label styling */\n"
"QLabel {\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"/* Specific label inside 'GameWindow' */\n"
"QLabel#questionLabel {\n"
"    font-size: 16pt;\n"
"    font-weight: bold;\n"
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"}\n"
"\n"
"/* QPushButton styling */\n"
"QPushButton {\n"
"    background-color: rgb(104, 90, 180); /* Purple background */\n"
"    color: white;\n"
"    font-size: 12pt;\n"
"    padding: 6px 12px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* Hover and pressed states for buttons */\n"
"QPushButton:hover {\n"
"    background-colo"
                        "r: rgb(120, 110, 200); /* Lighter purple on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(80, 60, 160); /* Darker purple on press */\n"
"}\n"
"\n"
"/* Specific button styling for 'GameWindow' */\n"
"QPushButton#button50, QPushButton#buttonSwap, QPushButton#submit {\n"
"    background-color: rgb(104, 90, 180); /* Purple background */\n"
"}\n"
"\n"
"QPushButton#button50:hover, QPushButton#buttonSwap:hover, QPushButton#submit:hover {\n"
"    background-color: rgb(120, 110, 200);\n"
"}\n"
"\n"
"/* RadioButtons */\n"
"QRadioButton {\n"
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"    border: 2px solid rgb(104, 90, 180); /* Purple border for circle */\n"
"    border-radius: 10px;\n"
"    background-color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: rgb(104, 90, 180); /* Purple circle when checked */\n"
"}\n"
"\n"
"/* ProgressBar */\n"
""
                        "QProgressBar {\n"
"    border: 1px solid rgb(104, 90, 180); /* Purple border */\n"
"    border-radius: 5px;\n"
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"    height: 20px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: rgb(104, 90, 180); /* Purple progress chunk */\n"
"    width: 1px;\n"
"}\n"
"\n"
"/* QTableWidget - Leaderboard Table */\n"
"QTableWidget {\n"
"    background-color: rgb(255, 255, 255); /* White background */\n"
"    border: 1px solid rgb(104, 90, 180); /* Purple border */\n"
"    gridline-color: rgb(104, 90, 180); /* Purple grid lines */\n"
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"/* Table header styling */\n"
"QTableWidget::horizontalHeader {\n"
"    background-color: rgb(104, 90, 180); /* Purple header */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 14pt;\n"
"}\n"
"\n"
"/* Specific QPushButton inside 'BoardWindow' */\n"
"QPushButton#closeButton {\n"
"    background-colo"
                        "r: rgb(104, 90, 180); /* Purple background */\n"
"    color: white;\n"
"    font-size: 12pt;\n"
"    padding: 6px 12px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* Hover and pressed effect for 'closeButton' */\n"
"QPushButton#closeButton:hover {\n"
"    background-color: rgb(120, 110, 200);\n"
"}\n"
"\n"
"QPushButton#closeButton:pressed {\n"
"    background-color: rgb(80, 60, 160);\n"
"}\n"
"\n"
"/* MenuBar styling */\n"
"QMenuBar {\n"
"    background-color: rgb(104, 90, 180); /* Purple menu bar */\n"
"    color: white;\n"
"}\n"
"\n"
"/* StatusBar styling */\n"
"QStatusBar {\n"
"    background-color: rgb(240, 240, 250); /* Light purple */\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"/* Score label styling */\n"
"QLabel#scoreLabel, QLabel#rankLabel {\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"}\n"
"/* Time Label styling */\n"
"QLabel#timeLabel {\n"
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"    font-weight: bold;\n"
""
                        "    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"    padding: 5px 10px;\n"
"    border-radius: 5px;\n"
"}\n"
"QLineEdit {\n"
"    background-color: rgb(220, 210, 255); /* Very light purple */\n"
"    color: rgb(50, 30, 100); /* Darker purple text */\n"
"    border: 2px solid rgb(104, 90, 180); /* Purple border */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    selection-background-color: rgb(104, 90, 180); /* Highlight color */\n"
"    selection-color: white; /* Selected text color */\n"
"}"));
        widget = new QWidget(groupBox_login);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 210, 401, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Admin_radio = new QRadioButton(widget);
        Admin_radio->setObjectName("Admin_radio");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        Admin_radio->setFont(font);

        horizontalLayout->addWidget(Admin_radio);

        User = new QRadioButton(widget);
        User->setObjectName("User");
        User->setFont(font);

        horizontalLayout->addWidget(User);

        widget1 = new QWidget(groupBox_login);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(60, 90, 471, 83));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget1);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        usernamelineEdit = new QLineEdit(widget1);
        usernamelineEdit->setObjectName("usernamelineEdit");

        verticalLayout_2->addWidget(usernamelineEdit);

        passwordlineEdit = new QLineEdit(widget1);
        passwordlineEdit->setObjectName("passwordlineEdit");

        verticalLayout_2->addWidget(passwordlineEdit);


        horizontalLayout_2->addLayout(verticalLayout_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 50, 356, 80));
        QFont font2;
        font2.setPointSize(36);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("selection-color: rgb(104, 90, 180);"));
        loginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        loginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(loginWindow);
        statusbar->setObjectName("statusbar");
        loginWindow->setStatusBar(statusbar);

        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *loginWindow)
    {
        loginWindow->setWindowTitle(QCoreApplication::translate("loginWindow", "MainWindow", nullptr));
        groupBox_login->setTitle(QString());
        Admin_radio->setText(QCoreApplication::translate("loginWindow", "Admin", nullptr));
        User->setText(QCoreApplication::translate("loginWindow", "User", nullptr));
        label->setText(QCoreApplication::translate("loginWindow", "Enter Username:", nullptr));
        label_2->setText(QCoreApplication::translate("loginWindow", "Enter Password:", nullptr));
        label_3->setText(QCoreApplication::translate("loginWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#404f96;\">MINDQUEST</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

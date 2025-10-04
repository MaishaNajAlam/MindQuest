/********************************************************************************
** Form generated from reading UI file 'userloginsystem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGINSYSTEM_H
#define UI_USERLOGINSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLoginSystem
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *UserLogin;
    QRadioButton *UserSignup;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserLoginSystem)
    {
        if (UserLoginSystem->objectName().isEmpty())
            UserLoginSystem->setObjectName("UserLoginSystem");
        UserLoginSystem->resize(800, 600);
        UserLoginSystem->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(UserLoginSystem);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(190, 220, 411, 251));
        groupBox->setStyleSheet(QString::fromUtf8("/* Main window background */\n"
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
""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 30, 321, 141));
        QFont font;
        font.setPointSize(15);
        font.setItalic(true);
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        UserLogin = new QRadioButton(layoutWidget);
        UserLogin->setObjectName("UserLogin");
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        UserLogin->setFont(font1);

        verticalLayout->addWidget(UserLogin);

        UserSignup = new QRadioButton(layoutWidget);
        UserSignup->setObjectName("UserSignup");
        UserSignup->setFont(font1);

        verticalLayout->addWidget(UserSignup);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 190, 75, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 80, 356, 80));
        QFont font2;
        font2.setPointSize(36);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("selection-color: rgb(104, 90, 180);"));
        UserLoginSystem->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserLoginSystem);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        UserLoginSystem->setMenuBar(menubar);
        statusbar = new QStatusBar(UserLoginSystem);
        statusbar->setObjectName("statusbar");
        UserLoginSystem->setStatusBar(statusbar);

        retranslateUi(UserLoginSystem);

        QMetaObject::connectSlotsByName(UserLoginSystem);
    } // setupUi

    void retranslateUi(QMainWindow *UserLoginSystem)
    {
        UserLoginSystem->setWindowTitle(QCoreApplication::translate("UserLoginSystem", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        UserLogin->setText(QCoreApplication::translate("UserLoginSystem", "LogIn", nullptr));
        UserSignup->setText(QCoreApplication::translate("UserLoginSystem", "SignUp", nullptr));
        pushButton->setText(QCoreApplication::translate("UserLoginSystem", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("UserLoginSystem", "<html><head/><body><p align=\"center\"><span style=\" color:#404f96;\">MINDQUEST</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserLoginSystem: public Ui_UserLoginSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGINSYSTEM_H

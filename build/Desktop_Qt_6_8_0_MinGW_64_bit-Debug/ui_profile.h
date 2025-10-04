/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

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

class Ui_Profile
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_profileheader;
    QPushButton *pushButton_back;
    QPushButton *pushButton_leaderboard;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_username;
    QLabel *label_mail;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_user;
    QLabel *label_usermail;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(800, 600);
        Profile->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(Profile);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(110, 80, 581, 361));
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
""));
        label_profileheader = new QLabel(groupBox);
        label_profileheader->setObjectName("label_profileheader");
        label_profileheader->setGeometry(QRect(240, 60, 111, 20));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_profileheader->setFont(font);
        label_profileheader->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        pushButton_back = new QPushButton(groupBox);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(70, 270, 131, 41));
        pushButton_leaderboard = new QPushButton(groupBox);
        pushButton_leaderboard->setObjectName("pushButton_leaderboard");
        pushButton_leaderboard->setGeometry(QRect(382, 270, 131, 41));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 140, 113, 81));
        QFont font1;
        font1.setBold(true);
        layoutWidget->setFont(font1);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_username = new QLabel(layoutWidget);
        label_username->setObjectName("label_username");
        label_username->setFont(font);

        verticalLayout->addWidget(label_username);

        label_mail = new QLabel(layoutWidget);
        label_mail->setObjectName("label_mail");
        label_mail->setFont(font);

        verticalLayout->addWidget(label_mail);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(190, 140, 321, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_user = new QLabel(layoutWidget1);
        label_user->setObjectName("label_user");

        verticalLayout_2->addWidget(label_user);

        label_usermail = new QLabel(layoutWidget1);
        label_usermail->setObjectName("label_usermail");

        verticalLayout_2->addWidget(label_usermail);

        Profile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Profile);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Profile->setMenuBar(menubar);
        statusbar = new QStatusBar(Profile);
        statusbar->setObjectName("statusbar");
        Profile->setStatusBar(statusbar);

        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QMainWindow *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Profile", nullptr));
        groupBox->setTitle(QString());
        label_profileheader->setText(QCoreApplication::translate("Profile", "PROFILE", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Profile", "Back", nullptr));
        pushButton_leaderboard->setText(QCoreApplication::translate("Profile", "Leaderboard", nullptr));
        label_username->setText(QCoreApplication::translate("Profile", "UserName", nullptr));
        label_mail->setText(QCoreApplication::translate("Profile", "E-mail", nullptr));
        label_user->setText(QString());
        label_usermail->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H

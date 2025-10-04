/********************************************************************************
** Form generated from reading UI file 'testwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTWINDOW_H
#define UI_TESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *questionLabel;
    QLabel *scoreLabel;
    QProgressBar *progressBar;
    QPushButton *submit;
    QLabel *timerLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *op1;
    QRadioButton *op3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *op2;
    QRadioButton *op4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *testWindow)
    {
        if (testWindow->objectName().isEmpty())
            testWindow->setObjectName("testWindow");
        testWindow->resize(800, 600);
        testWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(testWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 10, 701, 541));
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
"     border: 2px solid rgb(104, 90, 180);\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"}\n"
"/* Time Label styling */\n"
"QLabel#timeLabel {\n"
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100);"
                        " /* Dark purple */\n"
"    font-weight: bold;\n"
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"    padding: 5px 10px;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        questionLabel = new QLabel(groupBox);
        questionLabel->setObjectName("questionLabel");
        questionLabel->setGeometry(QRect(40, 80, 621, 191));
        questionLabel->setWordWrap(true);
        scoreLabel = new QLabel(groupBox);
        scoreLabel->setObjectName("scoreLabel");
        scoreLabel->setGeometry(QRect(20, 480, 161, 41));
        scoreLabel->setStyleSheet(QString::fromUtf8("border-color: rgb(170, 0, 255);\n"
""));
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(570, 20, 118, 23));
        progressBar->setValue(24);
        submit = new QPushButton(groupBox);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(570, 480, 111, 41));
        timerLabel = new QLabel(groupBox);
        timerLabel->setObjectName("timerLabel");
        timerLabel->setGeometry(QRect(20, 20, 161, 31));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 290, 611, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        op1 = new QRadioButton(layoutWidget);
        op1->setObjectName("op1");

        verticalLayout->addWidget(op1);

        op3 = new QRadioButton(layoutWidget);
        op3->setObjectName("op3");

        verticalLayout->addWidget(op3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        op2 = new QRadioButton(layoutWidget);
        op2->setObjectName("op2");

        verticalLayout_2->addWidget(op2);

        op4 = new QRadioButton(layoutWidget);
        op4->setObjectName("op4");

        verticalLayout_2->addWidget(op4);


        horizontalLayout->addLayout(verticalLayout_2);

        testWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(testWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        testWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(testWindow);
        statusbar->setObjectName("statusbar");
        testWindow->setStatusBar(statusbar);

        retranslateUi(testWindow);

        QMetaObject::connectSlotsByName(testWindow);
    } // setupUi

    void retranslateUi(QMainWindow *testWindow)
    {
        testWindow->setWindowTitle(QCoreApplication::translate("testWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("testWindow", "Question", nullptr));
        questionLabel->setText(QCoreApplication::translate("testWindow", "Q:", nullptr));
        scoreLabel->setText(QCoreApplication::translate("testWindow", "Score", nullptr));
        submit->setText(QCoreApplication::translate("testWindow", "Submit", nullptr));
        timerLabel->setText(QCoreApplication::translate("testWindow", "Time left:", nullptr));
        op1->setText(QCoreApplication::translate("testWindow", "option1", nullptr));
        op3->setText(QCoreApplication::translate("testWindow", "option3", nullptr));
        op2->setText(QCoreApplication::translate("testWindow", "option2", nullptr));
        op4->setText(QCoreApplication::translate("testWindow", "option4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testWindow: public Ui_testWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTWINDOW_H

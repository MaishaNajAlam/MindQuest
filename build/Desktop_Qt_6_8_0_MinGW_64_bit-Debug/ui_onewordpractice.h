/********************************************************************************
** Form generated from reading UI file 'onewordpractice.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEWORDPRACTICE_H
#define UI_ONEWORDPRACTICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OneWordPractice
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *scorelabel;
    QPushButton *submitButton;
    QLineEdit *answerline;
    QLabel *label;
    QLabel *label_2;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OneWordPractice)
    {
        if (OneWordPractice->objectName().isEmpty())
            OneWordPractice->setObjectName("OneWordPractice");
        OneWordPractice->resize(800, 600);
        OneWordPractice->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(OneWordPractice);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 30, 721, 491));
        groupBox->setStyleSheet(QString::fromUtf8("/* Main window background */\n"
"QMainWindow {\n"
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: rgb(220, 210, 255); /* Very light purple */\n"
"    color: rgb(50, 30, 100); /* Darker purple text */\n"
"    border: 2px solid rgb(104, 90, 180); /* Purple border */\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    selection-background-color: rgb(104, 90, 180); /* Highlight color */\n"
"    selection-color: white; /* Selected text color */\n"
"}\n"
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
" \n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"/* Specific label inside 'GameWindow' */\n"
"QLabel#questionLabel {\n"
"    font-size: 16pt;\n"
"   "
                        " font-weight: bold;\n"
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
"    background-color: rgb(120, 110, 200); /* Lighter purple on hover */\n"
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
"    color: rgb(50, 30, 100"
                        "); /* Dark purple */\n"
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
"    "
                        "font-size: 12pt;\n"
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
"    background-color: rgb(104, 90, 180); /* Purple background */\n"
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
"    background-color: rgb(240,"
                        " 240, 250); /* Light purple */\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"/* Score label styling */\n"
"QLabel#scoreLabel {\n"
"     border: 2px solid rgb(104, 90, 180);\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"}\n"
"\n"
""));
        scorelabel = new QLabel(groupBox);
        scorelabel->setObjectName("scorelabel");
        scorelabel->setGeometry(QRect(20, 400, 171, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        scorelabel->setFont(font);
        scorelabel->setStyleSheet(QString::fromUtf8("QLabel#scorelabel{\n"
" border: 2px solid rgb(104, 90, 180);\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); \n"
"}"));
        submitButton = new QPushButton(groupBox);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(590, 400, 101, 41));
        answerline = new QLineEdit(groupBox);
        answerline->setObjectName("answerline");
        answerline->setGeometry(QRect(180, 270, 511, 41));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 671, 141));
        label->setWordWrap(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 270, 161, 31));
        label_2->setFont(font);
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(590, 10, 121, 21));
        progressBar->setValue(24);
        OneWordPractice->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OneWordPractice);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        OneWordPractice->setMenuBar(menubar);
        statusbar = new QStatusBar(OneWordPractice);
        statusbar->setObjectName("statusbar");
        OneWordPractice->setStatusBar(statusbar);

        retranslateUi(OneWordPractice);

        QMetaObject::connectSlotsByName(OneWordPractice);
    } // setupUi

    void retranslateUi(QMainWindow *OneWordPractice)
    {
        OneWordPractice->setWindowTitle(QCoreApplication::translate("OneWordPractice", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        scorelabel->setText(QCoreApplication::translate("OneWordPractice", "Score:", nullptr));
        submitButton->setText(QCoreApplication::translate("OneWordPractice", "Submit", nullptr));
        label->setText(QCoreApplication::translate("OneWordPractice", "Question:", nullptr));
        label_2->setText(QCoreApplication::translate("OneWordPractice", "Enter Answer:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OneWordPractice: public Ui_OneWordPractice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEWORDPRACTICE_H

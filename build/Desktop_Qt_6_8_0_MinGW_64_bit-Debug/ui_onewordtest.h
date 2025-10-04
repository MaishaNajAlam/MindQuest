/********************************************************************************
** Form generated from reading UI file 'onewordtest.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEWORDTEST_H
#define UI_ONEWORDTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oneWordTest
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *scoreLabel;
    QLabel *label;
    QLabel *timerLabel;
    QProgressBar *progressBar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *answerline;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *oneWordTest)
    {
        if (oneWordTest->objectName().isEmpty())
            oneWordTest->setObjectName("oneWordTest");
        oneWordTest->resize(800, 600);
        oneWordTest->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(oneWordTest);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 30, 721, 511));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"QMainWindow {\n"
"    background-color: rgb(240, 240, 250); \n"
"}\n"
"QLineEdit {\n"
"    background-color: rgb(220, 210, 255); \n"
"    color: rgb(50, 30, 100); \n"
"    border: 2px solid rgb(104, 90, 180); \n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"    selection-background-color: rgb(104, 90, 180); \n"
"    selection-color: white; \n"
"}\n"
"\n"
"QGroupBox {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 2px solid rgb(104, 90, 180); \n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QLabel {\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); \n"
"}\n"
"\n"
"QLabel#questionLabel {\n"
"    font-size: 16pt;\n"
"    font-weight: bold;\n"
"    color: rgb(50, 30, 100);\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: rgb(104, 90, 180); \n"
"    color: white;\n"
"    font-size: 12pt;\n"
"    padding: 6px 12px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* Hover and pressed states for buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgb(120, "
                        "110, 200); /* Lighter purple on hover */\n"
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
"QProgressBa"
                        "r {\n"
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
"    background-color: rgb(104,"
                        " 90, 180); /* Purple background */\n"
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
"QLabel#scoreLabel{\n"
" border: 2px solid rgb(104, 90, 180);\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); \n"
"}\n"
"/* Time Label styling */\n"
"QLabel#timeLabel {\n"
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"    font-weight: bold;\n"
"    background-color: rgb(240, "
                        "240, 250); /* Light purple background */\n"
"    padding: 5px 10px;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(580, 440, 111, 41));
        scoreLabel = new QLabel(groupBox);
        scoreLabel->setObjectName("scoreLabel");
        scoreLabel->setGeometry(QRect(30, 450, 161, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        scoreLabel->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 100, 681, 201));
        label->setWordWrap(true);
        timerLabel = new QLabel(groupBox);
        timerLabel->setObjectName("timerLabel");
        timerLabel->setGeometry(QRect(20, 20, 221, 31));
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(590, 10, 121, 21));
        progressBar->setValue(24);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 350, 671, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        answerline = new QLineEdit(layoutWidget);
        answerline->setObjectName("answerline");

        horizontalLayout->addWidget(answerline);

        oneWordTest->setCentralWidget(centralwidget);
        menubar = new QMenuBar(oneWordTest);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        oneWordTest->setMenuBar(menubar);
        statusbar = new QStatusBar(oneWordTest);
        statusbar->setObjectName("statusbar");
        oneWordTest->setStatusBar(statusbar);

        retranslateUi(oneWordTest);

        QMetaObject::connectSlotsByName(oneWordTest);
    } // setupUi

    void retranslateUi(QMainWindow *oneWordTest)
    {
        oneWordTest->setWindowTitle(QCoreApplication::translate("oneWordTest", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("oneWordTest", "submit", nullptr));
        scoreLabel->setText(QCoreApplication::translate("oneWordTest", "Score:", nullptr));
        label->setText(QCoreApplication::translate("oneWordTest", "Question:", nullptr));
        timerLabel->setText(QCoreApplication::translate("oneWordTest", "Time left:", nullptr));
        label_2->setText(QCoreApplication::translate("oneWordTest", "Enter Answer:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oneWordTest: public Ui_oneWordTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEWORDTEST_H

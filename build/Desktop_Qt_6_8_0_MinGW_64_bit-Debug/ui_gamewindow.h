/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

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

class Ui_GameWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *questionLabel;
    QProgressBar *progressBar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *op1;
    QRadioButton *op3;
    QVBoxLayout *verticalLayout;
    QRadioButton *op2;
    QRadioButton *op4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *button50;
    QPushButton *buttonSwap;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *submit;
    QLabel *scoreLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName("GameWindow");
        GameWindow->resize(800, 600);
        GameWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"/* Style the QMessageBox itself */\n"
"QMessageBox {\n"
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"    border: 2px solid rgb(104, 90, 180); /* Purple border */\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"/* Style the text inside the message box */\n"
"QMessageBox QLabel {\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Style the buttons inside the message box */\n"
"QMessageBox QPushButton {\n"
"    background-color: rgb(104, 90, 180); /* Purple button */\n"
"    color: white;\n"
"    font-size: 12pt;\n"
"    padding: 6px 12px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* Button hover effect */\n"
"QMessageBox QPushButton:hover {\n"
"    background-color: rgb(120, 110, 200);\n"
"}\n"
"\n"
"/* Button when pressed */\n"
"QMessageBox QPushButton:pressed {\n"
"    background-color: rgb(80, 60, 160);\n"
"}\n"
""));
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 40, 671, 471));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox#groupBox {\n"
"    background-color:white;\n"
"    border: 2px solid rgb(120, 100, 200); /* Purple border */\n"
"    border-radius: 10px;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    color: rgb(80, 60, 160); /* Deep purple text */\n"
"}\n"
"\n"
"/* Style for the question label */\n"
"QLabel#questionLabel {\n"
"    font-size: 16pt;\n"
"    font-weight: bold;\n"
"    color: rgb(80, 60, 160);\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"/* Style for radio buttons */\n"
"QRadioButton {\n"
"    font-size: 14pt; /* Bigger text */\n"
"    color: rgb(50, 30, 100);\n"
"    spacing: 10px;\n"
"}\n"
"\n"
"/* Make radio button indicator (circle) larger */\n"
"QRadioButton::indicator {\n"
"    width: 20px;  /* Adjust width */\n"
"    height: 20px; /* Adjust height */\n"
"    border-radius: 10px; /* Ensures a perfect circle */\n"
"    border: 2px solid rgb(120, 100, 200); /* Purple border */\n"
"    background-color: white;\n"
"}\n"
"\n"
"/* When hovered */\n"
"QRadioButton::indicator:hover "
                        "{\n"
"    border: 2px solid rgb(140, 120, 220);\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: rgb(120, 100, 200); /* Purple fill */\n"
"    border: 2px solid rgb(80, 60, 160);\n"
"}\n"
"\n"
"/* Hover effect for radio buttons */\n"
"QRadioButton:hover {\n"
"    color: rgb(80, 60, 160);\n"
"}\n"
"\n"
"\n"
"QLabel#scoreLabel {\n"
"   border: 2px solid rgb(120, 100, 200);\n"
"    font-size: 12pt;\n"
"    font-weight: bold;\n"
"    color: rgb(120, 100, 200);\n"
"}\n"
"\n"
"/* Style for buttons (50/50, Swap Q, Submit) */\n"
"QPushButton {\n"
"    background-color: rgb(120, 100, 200); /* Purple */\n"
"    color: white;\n"
"    font-size: 12pt;\n"
"    font-weight: bold;\n"
"    border: 2px solid rgb(90, 80, 160);\n"
"    border-radius: 8px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"/* Hover effect for buttons */\n"
"QPushButton:hover {\n"
"    background-color: rgb(140, 120, 220); /* Lighter purple */\n"
"}\n"
"\n"
"/* Pressed effect for buttons */\n"
"QPushButton:pressed {\n"
"    backgr"
                        "ound-color: rgb(100, 80, 180); /* Darker purple */\n"
"    border: 2px solid rgb(80, 70, 150);\n"
"}\n"
"\n"
"/* Style for progress bar */\n"
"QProgressBar {\n"
"    border: 2px solid rgb(90, 80, 160);\n"
"    border-radius: 5px;\n"
"    background-color: rgb(220, 220, 255);\n"
"    text-align: center;\n"
"    color: rgb(50, 30, 100);\n"
"}\n"
"\n"
"/* Progress bar chunk (fill) */\n"
"QProgressBar::chunk {\n"
"    background-color: rgb(120, 100, 200);\n"
"    border-radius: 5px;\n"
"}"));
        questionLabel = new QLabel(groupBox);
        questionLabel->setObjectName("questionLabel");
        questionLabel->setGeometry(QRect(50, 50, 561, 111));
        questionLabel->setWordWrap(true);
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(540, 10, 118, 23));
        progressBar->setValue(24);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 190, 571, 75));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        op1 = new QRadioButton(layoutWidget);
        op1->setObjectName("op1");

        verticalLayout_2->addWidget(op1);

        op3 = new QRadioButton(layoutWidget);
        op3->setObjectName("op3");

        verticalLayout_2->addWidget(op3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        op2 = new QRadioButton(layoutWidget);
        op2->setObjectName("op2");

        verticalLayout->addWidget(op2);

        op4 = new QRadioButton(layoutWidget);
        op4->setObjectName("op4");

        verticalLayout->addWidget(op4);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 320, 89, 95));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        button50 = new QPushButton(layoutWidget1);
        button50->setObjectName("button50");

        verticalLayout_3->addWidget(button50);

        buttonSwap = new QPushButton(layoutWidget1);
        buttonSwap->setObjectName("buttonSwap");

        verticalLayout_3->addWidget(buttonSwap);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(520, 330, 101, 91));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        submit = new QPushButton(layoutWidget2);
        submit->setObjectName("submit");

        verticalLayout_4->addWidget(submit);

        scoreLabel = new QLabel(layoutWidget2);
        scoreLabel->setObjectName("scoreLabel");
        scoreLabel->setStyleSheet(QString::fromUtf8("border-color: rgb(170, 0, 255);"));

        verticalLayout_4->addWidget(scoreLabel);

        GameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        GameWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GameWindow);
        statusbar->setObjectName("statusbar");
        GameWindow->setStatusBar(statusbar);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QCoreApplication::translate("GameWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        questionLabel->setText(QCoreApplication::translate("GameWindow", "Q:", nullptr));
        op1->setText(QCoreApplication::translate("GameWindow", "option1", nullptr));
        op3->setText(QCoreApplication::translate("GameWindow", "option3", nullptr));
        op2->setText(QCoreApplication::translate("GameWindow", "option2", nullptr));
        op4->setText(QCoreApplication::translate("GameWindow", "option4", nullptr));
        button50->setText(QCoreApplication::translate("GameWindow", "50/50", nullptr));
        buttonSwap->setText(QCoreApplication::translate("GameWindow", "Swap Q", nullptr));
        submit->setText(QCoreApplication::translate("GameWindow", "Submit", nullptr));
        scoreLabel->setText(QCoreApplication::translate("GameWindow", "Score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H

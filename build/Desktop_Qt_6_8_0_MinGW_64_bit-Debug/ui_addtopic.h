/********************************************************************************
** Form generated from reading UI file 'addtopic.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTOPIC_H
#define UI_ADDTOPIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addtopic
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_addt;
    QPushButton *pushButton_addt;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_addt;
    QLineEdit *lineEdit_addt;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addtopic)
    {
        if (addtopic->objectName().isEmpty())
            addtopic->setObjectName("addtopic");
        addtopic->resize(800, 600);
        addtopic->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(addtopic);
        centralwidget->setObjectName("centralwidget");
        groupBox_addt = new QGroupBox(centralwidget);
        groupBox_addt->setObjectName("groupBox_addt");
        groupBox_addt->setGeometry(QRect(130, 110, 531, 321));
        groupBox_addt->setStyleSheet(QString::fromUtf8("/* Main window background */\n"
"QMainWindow {\n"
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"}\n"
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
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"/* Specific label inside 'GameWindow' */\n"
"QLabel#questionLabel {\n"
"    font-size: 16pt;\n"
"    font-weigh"
                        "t: bold;\n"
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
"    color: rgb(50, 30, 100); /* Dark "
                        "purple */\n"
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
"    font-size: "
                        "12pt;\n"
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
"    background-color: rgb(240, 240, 250);"
                        " /* Light purple */\n"
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
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"    padding: 5px 10px;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        pushButton_addt = new QPushButton(groupBox_addt);
        pushButton_addt->setObjectName("pushButton_addt");
        pushButton_addt->setGeometry(QRect(190, 230, 151, 41));
        layoutWidget = new QWidget(groupBox_addt);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(36, 120, 461, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_addt = new QLabel(layoutWidget);
        label_addt->setObjectName("label_addt");

        horizontalLayout->addWidget(label_addt);

        lineEdit_addt = new QLineEdit(layoutWidget);
        lineEdit_addt->setObjectName("lineEdit_addt");

        horizontalLayout->addWidget(lineEdit_addt);

        addtopic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addtopic);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        addtopic->setMenuBar(menubar);
        statusbar = new QStatusBar(addtopic);
        statusbar->setObjectName("statusbar");
        addtopic->setStatusBar(statusbar);

        retranslateUi(addtopic);

        QMetaObject::connectSlotsByName(addtopic);
    } // setupUi

    void retranslateUi(QMainWindow *addtopic)
    {
        addtopic->setWindowTitle(QCoreApplication::translate("addtopic", "MainWindow", nullptr));
        groupBox_addt->setTitle(QString());
        pushButton_addt->setText(QCoreApplication::translate("addtopic", "Add Topic", nullptr));
        label_addt->setText(QCoreApplication::translate("addtopic", "Enter Topic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addtopic: public Ui_addtopic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTOPIC_H

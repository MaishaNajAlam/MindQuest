/********************************************************************************
** Form generated from reading UI file 'addquestion.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDQUESTION_H
#define UI_ADDQUESTION_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addquestion
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_addq;
    QPushButton *pushButton_add;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_topic;
    QLabel *label_enterq;
    QLabel *label_opA;
    QLabel *label_opB;
    QLabel *label_opC;
    QLabel *label_opD;
    QLabel *label_opD_corr;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_topic;
    QLineEdit *lineEdit_q;
    QLineEdit *lineEdit_opA;
    QLineEdit *lineEdit_opB;
    QLineEdit *lineEdit_opC;
    QLineEdit *lineEdit_opD;
    QLineEdit *lineEdit_corr;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addquestion)
    {
        if (addquestion->objectName().isEmpty())
            addquestion->setObjectName("addquestion");
        addquestion->resize(800, 600);
        addquestion->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(addquestion);
        centralwidget->setObjectName("centralwidget");
        groupBox_addq = new QGroupBox(centralwidget);
        groupBox_addq->setObjectName("groupBox_addq");
        groupBox_addq->setGeometry(QRect(40, 40, 721, 481));
        groupBox_addq->setStyleSheet(QString::fromUtf8("/* Main window background */\n"
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
        pushButton_add = new QPushButton(groupBox_addq);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(480, 420, 181, 41));
        widget = new QWidget(groupBox_addq);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 60, 621, 341));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_topic = new QLabel(widget);
        label_topic->setObjectName("label_topic");

        verticalLayout->addWidget(label_topic);

        label_enterq = new QLabel(widget);
        label_enterq->setObjectName("label_enterq");

        verticalLayout->addWidget(label_enterq);

        label_opA = new QLabel(widget);
        label_opA->setObjectName("label_opA");

        verticalLayout->addWidget(label_opA);

        label_opB = new QLabel(widget);
        label_opB->setObjectName("label_opB");

        verticalLayout->addWidget(label_opB);

        label_opC = new QLabel(widget);
        label_opC->setObjectName("label_opC");

        verticalLayout->addWidget(label_opC);

        label_opD = new QLabel(widget);
        label_opD->setObjectName("label_opD");

        verticalLayout->addWidget(label_opD);

        label_opD_corr = new QLabel(widget);
        label_opD_corr->setObjectName("label_opD_corr");

        verticalLayout->addWidget(label_opD_corr);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_topic = new QLineEdit(widget);
        lineEdit_topic->setObjectName("lineEdit_topic");

        verticalLayout_2->addWidget(lineEdit_topic);

        lineEdit_q = new QLineEdit(widget);
        lineEdit_q->setObjectName("lineEdit_q");

        verticalLayout_2->addWidget(lineEdit_q);

        lineEdit_opA = new QLineEdit(widget);
        lineEdit_opA->setObjectName("lineEdit_opA");

        verticalLayout_2->addWidget(lineEdit_opA);

        lineEdit_opB = new QLineEdit(widget);
        lineEdit_opB->setObjectName("lineEdit_opB");

        verticalLayout_2->addWidget(lineEdit_opB);

        lineEdit_opC = new QLineEdit(widget);
        lineEdit_opC->setObjectName("lineEdit_opC");

        verticalLayout_2->addWidget(lineEdit_opC);

        lineEdit_opD = new QLineEdit(widget);
        lineEdit_opD->setObjectName("lineEdit_opD");

        verticalLayout_2->addWidget(lineEdit_opD);

        lineEdit_corr = new QLineEdit(widget);
        lineEdit_corr->setObjectName("lineEdit_corr");

        verticalLayout_2->addWidget(lineEdit_corr);


        horizontalLayout->addLayout(verticalLayout_2);

        addquestion->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addquestion);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        addquestion->setMenuBar(menubar);
        statusbar = new QStatusBar(addquestion);
        statusbar->setObjectName("statusbar");
        addquestion->setStatusBar(statusbar);

        retranslateUi(addquestion);

        QMetaObject::connectSlotsByName(addquestion);
    } // setupUi

    void retranslateUi(QMainWindow *addquestion)
    {
        addquestion->setWindowTitle(QCoreApplication::translate("addquestion", "MainWindow", nullptr));
        groupBox_addq->setTitle(QString());
        pushButton_add->setText(QCoreApplication::translate("addquestion", "Add Question", nullptr));
        label_topic->setText(QCoreApplication::translate("addquestion", "Enter Topic", nullptr));
        label_enterq->setText(QCoreApplication::translate("addquestion", "Enter Question", nullptr));
        label_opA->setText(QCoreApplication::translate("addquestion", "Enter Option A", nullptr));
        label_opB->setText(QCoreApplication::translate("addquestion", "Enter Option B", nullptr));
        label_opC->setText(QCoreApplication::translate("addquestion", "Enter Option C", nullptr));
        label_opD->setText(QCoreApplication::translate("addquestion", "Enter Option D", nullptr));
        label_opD_corr->setText(QCoreApplication::translate("addquestion", "Enter Correct Answer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addquestion: public Ui_addquestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDQUESTION_H

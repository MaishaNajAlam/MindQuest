/********************************************************************************
** Form generated from reading UI file 'quizstart.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZSTART_H
#define UI_QUIZSTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuizStart
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_4;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_mode;
    QLabel *label_topic;
    QLabel *label_type;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QuizStart)
    {
        if (QuizStart->objectName().isEmpty())
            QuizStart->setObjectName("QuizStart");
        QuizStart->resize(800, 600);
        QuizStart->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(QuizStart);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 30, 711, 521));
        groupBox->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"}\n"
"\n"
"QGroupBox {\n"
"    background-color: rgb(255, 255, 255); /* White background */\n"
"    border: 2px solid rgb(104, 90, 180); /* Purple border */\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QLabel {\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"QLabel#questionLabel {\n"
"    font-size: 16pt;\n"
"    font-weight: bold;\n"
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: rgb(104, 90, 180); /* Purple background */\n"
"    color: white;\n"
"    font-size: 12pt;\n"
"    padding: 6px 12px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(120, 110, 200); /* Lighter purple on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(80, 60, 160); /* Darker purple on press */\n"
"}\n"
"\n"
"QPushButton#button50, QPushButton#button"
                        "Swap, QPushButton#submit {\n"
"    background-color: rgb(104, 90, 180); /* Purple background */\n"
"}\n"
"\n"
"QPushButton#button50:hover, QPushButton#buttonSwap:hover, QPushButton#submit:hover {\n"
"    background-color: rgb(120, 110, 200);\n"
"}\n"
"\n"
"\n"
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
"/\n"
"QProgressBar {\n"
"    border: 1px solid rgb(104, 90, 180); /* Purple border */\n"
"    border-radius: 5px;\n"
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"    height: 20px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: rgb(104, 90, 180); /* Purple progress "
                        "chunk */\n"
"    width: 1px;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    background-color: rgb(255, 255, 255); /* White background */\n"
"    border: 1px solid rgb(104, 90, 180); /* Purple border */\n"
"    gridline-color: rgb(104, 90, 180); /* Purple grid lines */\n"
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"QTableWidget::horizontalHeader {\n"
"    background-color: rgb(104, 90, 180); /* Purple header */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 14pt;\n"
"}\n"
"\n"
"QPushButton#closeButton {\n"
"    background-color: rgb(104, 90, 180); /* Purple background */\n"
"    color: white;\n"
"    font-size: 12pt;\n"
"    padding: 6px 12px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton#closeButton:hover {\n"
"    background-color: rgb(120, 110, 200);\n"
"}\n"
"\n"
"QPushButton#closeButton:pressed {\n"
"    background-color: rgb(80, 60, 160);\n"
"}\n"
"\n"
"QMenuBar {\n"
"    background-color: rgb(104, 90, 180); /* Purple menu bar */\n"
"  "
                        "  color: white;\n"
"}\n"
"\n"
"QStatusBar {\n"
"    background-color: rgb(240, 240, 250); /* Light purple */\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"QLabel#scoreLabel, QLabel#rankLabel {\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"}\n"
"\n"
"QLabel#timeLabel {\n"
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"    font-weight: bold;\n"
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"    padding: 5px 10px;\n"
"    border-radius: 5px;\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 10, 121, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 200, 601, 231));
        QFont font1;
        font1.setPointSize(14);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("  border: 2px solid rgb(104, 90, 180); /* Purple border */"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 460, 75, 31));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 70, 451, 94));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_mode = new QLabel(layoutWidget);
        label_mode->setObjectName("label_mode");

        verticalLayout_2->addWidget(label_mode);

        label_topic = new QLabel(layoutWidget);
        label_topic->setObjectName("label_topic");

        verticalLayout_2->addWidget(label_topic);

        label_type = new QLabel(layoutWidget);
        label_type->setObjectName("label_type");

        verticalLayout_2->addWidget(label_type);


        horizontalLayout->addLayout(verticalLayout_2);

        QuizStart->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QuizStart);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        QuizStart->setMenuBar(menubar);
        statusbar = new QStatusBar(QuizStart);
        statusbar->setObjectName("statusbar");
        QuizStart->setStatusBar(statusbar);

        retranslateUi(QuizStart);

        QMetaObject::connectSlotsByName(QuizStart);
    } // setupUi

    void retranslateUi(QMainWindow *QuizStart)
    {
        QuizStart->setWindowTitle(QCoreApplication::translate("QuizStart", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("QuizStart", "Starting Quiz", nullptr));
        label_4->setText(QCoreApplication::translate("QuizStart", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:700; text-decoration: underline;\">Rules for the User</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">1.In Game Mode, the quiz will end immediately after your first wrong answer.</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">You have two lifelines, each usable only once:</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">\342\200\24250/50 removes two incorrect options.</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">\342\200\242Swap Question replaces the current question with a new one.</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">2.In Test Mode, you must answer within the time limit.If the timer runs out, the quiz will end.</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">3.In Practice Mode, there is no time limit and no penalties for wron"
                        "g answers.</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">4.Once you submit an answer, you cannot change it.</span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:700;\">5.Your score is based on how many questions you answer correctly.</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("QuizStart", "START", nullptr));
        label_2->setText(QCoreApplication::translate("QuizStart", "Mode:", nullptr));
        label_3->setText(QCoreApplication::translate("QuizStart", "Topic:", nullptr));
        label_5->setText(QCoreApplication::translate("QuizStart", "Type:", nullptr));
        label_mode->setText(QString());
        label_topic->setText(QString());
        label_type->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QuizStart: public Ui_QuizStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZSTART_H

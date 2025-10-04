/********************************************************************************
** Form generated from reading UI file 'topicselection.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPICSELECTION_H
#define UI_TOPICSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TopicSelection
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *procedeButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *MCQButton;
    QRadioButton *OneWordButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TopicSelection)
    {
        if (TopicSelection->objectName().isEmpty())
            TopicSelection->setObjectName("TopicSelection");
        TopicSelection->resize(800, 600);
        QFont font;
        font.setBold(true);
        TopicSelection->setFont(font);
        TopicSelection->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(TopicSelection);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 70, 701, 431));
        groupBox->setStyleSheet(QString::fromUtf8("/* Main window background */\n"
"QMainWindow {\n"
"    background-color: rgb(240, 240, 250); /* Light purple background */\n"
"}\n"
"QComboBox {\n"
"    background-color: rgb(240, 240, 240); /* Light gray background */\n"
"    border: 1px solid rgb(180, 180, 180); /* Light border */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px;\n"
"    color: rgb(50, 50, 50); /* Dark font color */\n"
"    font-size: 12pt;\n"
"    font-family: \"Arial\", sans-serif;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    background-color: rgb(240, 240, 240); /* Background for the dropdown */\n"
"    border: none;\n"
"    width: 20px; /* Adjust width of the drop-down button */\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icons/down_arrow.png); /* Customize the arrow image */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgb(255, 255, 255); /* White background for the dropdown list */\n"
"    border: 1px solid rgb(180, 180, 180); /* Light border */\n"
"    color: rgb(50, 50,"
                        " 50); /* Dark font color for items */\n"
"    font-size: 12pt;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"    padding: 5px;\n"
"    background-color: rgb(240, 240, 240); /* Item background color */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item:selected {\n"
"    background-color: rgb(180, 180, 180); /* Highlighted item background color */\n"
"    color: white; /* White text color for selected items */\n"
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
"/* QPushButton styling "
                        "*/\n"
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
"    color: rgb(50, 30, 100); /* Dark purple */\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
""
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
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"/* Table header styli"
                        "ng */\n"
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
"    background-color: rgb(240, 240, 250); /* Light purple */\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"/* Scor"
                        "e label styling */\n"
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
        procedeButton = new QPushButton(groupBox);
        procedeButton->setObjectName("procedeButton");
        procedeButton->setGeometry(QRect(290, 340, 141, 41));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 90, 611, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        label->setMidLineWidth(6);

        horizontalLayout_3->addWidget(label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName("comboBox");

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        MCQButton = new QRadioButton(layoutWidget);
        MCQButton->setObjectName("MCQButton");

        horizontalLayout->addWidget(MCQButton);

        OneWordButton = new QRadioButton(layoutWidget);
        OneWordButton->setObjectName("OneWordButton");

        horizontalLayout->addWidget(OneWordButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        TopicSelection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TopicSelection);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        TopicSelection->setMenuBar(menubar);
        statusbar = new QStatusBar(TopicSelection);
        statusbar->setObjectName("statusbar");
        TopicSelection->setStatusBar(statusbar);

        retranslateUi(TopicSelection);

        QMetaObject::connectSlotsByName(TopicSelection);
    } // setupUi

    void retranslateUi(QMainWindow *TopicSelection)
    {
        TopicSelection->setWindowTitle(QCoreApplication::translate("TopicSelection", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        procedeButton->setText(QCoreApplication::translate("TopicSelection", "OK", nullptr));
        label->setText(QCoreApplication::translate("TopicSelection", " Select Topic ", nullptr));
        label_2->setText(QCoreApplication::translate("TopicSelection", "Select Question Type", nullptr));
        MCQButton->setText(QCoreApplication::translate("TopicSelection", "MCQ", nullptr));
        OneWordButton->setText(QCoreApplication::translate("TopicSelection", "OneWord Q", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TopicSelection: public Ui_TopicSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPICSELECTION_H

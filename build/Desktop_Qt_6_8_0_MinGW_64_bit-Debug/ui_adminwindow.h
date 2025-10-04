/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_adminmenu;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_addquestion;
    QPushButton *pushButton_addtopic;
    QPushButton *pushButton_deletequestion;
    QPushButton *pushButton_deletetopic;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName("adminWindow");
        adminWindow->resize(800, 600);
        adminWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(adminWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_adminmenu = new QGroupBox(centralwidget);
        groupBox_adminmenu->setObjectName("groupBox_adminmenu");
        groupBox_adminmenu->setGeometry(QRect(100, 90, 591, 411));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        groupBox_adminmenu->setFont(font);
        groupBox_adminmenu->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
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
"}\n"
""));
        layoutWidget = new QWidget(groupBox_adminmenu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 70, 341, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_addquestion = new QPushButton(layoutWidget);
        pushButton_addquestion->setObjectName("pushButton_addquestion");

        verticalLayout->addWidget(pushButton_addquestion);

        pushButton_addtopic = new QPushButton(layoutWidget);
        pushButton_addtopic->setObjectName("pushButton_addtopic");

        verticalLayout->addWidget(pushButton_addtopic);

        pushButton_deletequestion = new QPushButton(layoutWidget);
        pushButton_deletequestion->setObjectName("pushButton_deletequestion");

        verticalLayout->addWidget(pushButton_deletequestion);

        pushButton_deletetopic = new QPushButton(layoutWidget);
        pushButton_deletetopic->setObjectName("pushButton_deletetopic");

        verticalLayout->addWidget(pushButton_deletetopic);

        pushButton = new QPushButton(groupBox_adminmenu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(244, 350, 81, 41));
        adminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        adminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminWindow);
        statusbar->setObjectName("statusbar");
        adminWindow->setStatusBar(statusbar);

        retranslateUi(adminWindow);

        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "MainWindow", nullptr));
        groupBox_adminmenu->setTitle(QString());
        pushButton_addquestion->setText(QCoreApplication::translate("adminWindow", "Add Question", nullptr));
        pushButton_addtopic->setText(QCoreApplication::translate("adminWindow", "Add Topic", nullptr));
        pushButton_deletequestion->setText(QCoreApplication::translate("adminWindow", "Delete Question", nullptr));
        pushButton_deletetopic->setText(QCoreApplication::translate("adminWindow", "Delete Topic", nullptr));
        pushButton->setText(QCoreApplication::translate("adminWindow", "LogOut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H

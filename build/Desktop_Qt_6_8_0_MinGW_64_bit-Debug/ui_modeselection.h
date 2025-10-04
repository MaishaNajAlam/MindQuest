/********************************************************************************
** Form generated from reading UI file 'modeselection.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODESELECTION_H
#define UI_MODESELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModeSelection
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *GameButton;
    QRadioButton *TestButton;
    QRadioButton *PracticeButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ModeSelection)
    {
        if (ModeSelection->objectName().isEmpty())
            ModeSelection->setObjectName("ModeSelection");
        ModeSelection->resize(800, 600);
        ModeSelection->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"QRadioButton {\n"
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100);\n"
"    spacing: 8px;\n"
"}\n"
"QMessageBox {\n"
"    color: rgb(50, 50, 50); /* Dark font color */\n"
"    background-color: rgb(255, 255, 255); /* White background */\n"
"    font-size: 12pt;\n"
"    font-family: \"Arial\", sans-serif;\n"
"}\n"
"\n"
"QMessageBox QPushButton {\n"
"    background-color: rgb(220, 220, 220); /* Button background color */\n"
"    color: rgb(50, 50, 50); /* Dark font color for buttons */\n"
"    border-radius: 5px;\n"
"    padding: 5px 15px;\n"
"}\n"
"\n"
"QMessageBox QPushButton:hover {\n"
"    background-color: rgb(180, 180, 180); /* Button hover effect */\n"
"}\n"
"\n"
"QMessageBox QLabel {\n"
"    color: rgb(50, 50, 50); /* Dark color for labels inside message box */\n"
"}\n"
""));
        centralwidget = new QWidget(ModeSelection);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100);\n"
"    spacing: 8px;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 80, 356, 80));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("selection-color: rgb(104, 90, 180);"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(200, 220, 411, 251));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox#groupBox {\n"
"    background-color: white;\n"
"    border: 2px solid rgb(120, 100, 200); \n"
"    border-radius: 10px;\n"
"    font-size: 14pt;\n"
"    font-weight: bold;\n"
"    color: rgb(80, 60, 160); \n"
"}\n"
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
"QRadioButton::indicator:hover {\n"
"    border: 2px solid rgb(140, 120, 220);\n"
"}\n"
"\n"
"/* When checked */\n"
"QRadioButton::indicator:checked {\n"
"    background-color: rgb(120, 100, 200); /* Purple fill */\n"
"    border: 2px solid rgb(80, 60, 160);\n"
"}\n"
"QMessage"
                        "Box {\n"
"    color: rgb(50, 50, 50); /* Dark font color */\n"
"    background-color: black;\n"
"    font-size: 12pt;\n"
"    font-family: \"Arial\", sans-serif;\n"
"}\n"
"\n"
""));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 70, 321, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        GameButton = new QRadioButton(widget);
        GameButton->setObjectName("GameButton");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        GameButton->setFont(font1);

        verticalLayout->addWidget(GameButton);

        TestButton = new QRadioButton(widget);
        TestButton->setObjectName("TestButton");
        TestButton->setFont(font1);

        verticalLayout->addWidget(TestButton);

        PracticeButton = new QRadioButton(widget);
        PracticeButton->setObjectName("PracticeButton");
        PracticeButton->setFont(font1);

        verticalLayout->addWidget(PracticeButton);

        ModeSelection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ModeSelection);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ModeSelection->setMenuBar(menubar);
        statusbar = new QStatusBar(ModeSelection);
        statusbar->setObjectName("statusbar");
        ModeSelection->setStatusBar(statusbar);

        retranslateUi(ModeSelection);

        QMetaObject::connectSlotsByName(ModeSelection);
    } // setupUi

    void retranslateUi(QMainWindow *ModeSelection)
    {
        ModeSelection->setWindowTitle(QCoreApplication::translate("ModeSelection", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("ModeSelection", "<html><head/><body><p align=\"center\"><span style=\" color:#404f96;\">MINDQUEST</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        GameButton->setText(QCoreApplication::translate("ModeSelection", "Game", nullptr));
        TestButton->setText(QCoreApplication::translate("ModeSelection", "Test", nullptr));
        PracticeButton->setText(QCoreApplication::translate("ModeSelection", "Practice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModeSelection: public Ui_ModeSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODESELECTION_H

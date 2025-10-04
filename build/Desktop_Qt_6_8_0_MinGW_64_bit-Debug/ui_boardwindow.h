/********************************************************************************
** Form generated from reading UI file 'boardwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDWINDOW_H
#define UI_BOARDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTableWidget *leaderboardTable;
    QLabel *rankLabel;
    QPushButton *closeButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BoardWindow)
    {
        if (BoardWindow->objectName().isEmpty())
            BoardWindow->setObjectName("BoardWindow");
        BoardWindow->resize(800, 600);
        BoardWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        centralwidget = new QWidget(BoardWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 20, 711, 501));
        groupBox->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgb(104, 90, 180); /* Main purple */\n"
"    font-size: 12pt;\n"
"    font-weight: bold;\n"
"}\n"
"QGroupBox {\n"
"    background-color: rgb(255, 255, 255); /* White background */\n"
"    border: 2px solid rgb(104, 90, 180); /* Purple border */\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* Style the leaderboard table */\n"
"QTableWidget {\n"
"    background-color: rgb(255, 255, 255); /* White background */\n"
"    border: 1px solid rgb(104, 90, 180); /* Purple border */\n"
"    gridline-color: rgb(104, 90, 180); /* Grid lines */\n"
"    font-size: 12pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"/* Style the table headers */\n"
"QTableWidget::horizontalHeader {\n"
"    background-color: rgb(104, 90, 180); /* Purple header */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    font-size: 14pt;\n"
"}\n"
"\n"
"/* Style the close button */\n"
"QPushButton#closeButton {\n"
"    background-color: rgb(104, 90, 180); /* Purple background "
                        "*/\n"
"    color: white;\n"
"    font-size: 12pt;\n"
"    padding: 6px 12px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* Button hover effect */\n"
"QPushButton#closeButton:hover {\n"
"    background-color: rgb(120, 110, 200);\n"
"}\n"
"\n"
"/* Button pressed effect */\n"
"QPushButton#closeButton:pressed {\n"
"    background-color: rgb(80, 60, 160);\n"
"}\n"
"\n"
"/* Style the rank label */\n"
"QLabel#rankLabel {\n"
"    font-size: 14pt;\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
"\n"
"/* Style the menu bar */\n"
"QMenuBar {\n"
"    background-color: rgb(104, 90, 180); /* Purple menu bar */\n"
"    color: white;\n"
"}\n"
"\n"
"/* Style the status bar */\n"
"QStatusBar {\n"
"    background-color: rgb(240, 240, 250); /* Light purple */\n"
"    color: rgb(50, 30, 100); /* Dark purple text */\n"
"}\n"
""));
        leaderboardTable = new QTableWidget(groupBox);
        if (leaderboardTable->columnCount() < 2)
            leaderboardTable->setColumnCount(2);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        leaderboardTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        leaderboardTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        leaderboardTable->setObjectName("leaderboardTable");
        leaderboardTable->setEnabled(true);
        leaderboardTable->setGeometry(QRect(230, 80, 251, 361));
        rankLabel = new QLabel(groupBox);
        rankLabel->setObjectName("rankLabel");
        rankLabel->setGeometry(QRect(20, 450, 311, 31));
        closeButton = new QPushButton(groupBox);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(590, 440, 101, 39));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 30, 171, 31));
        label->setFont(font);
        BoardWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BoardWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        BoardWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BoardWindow);
        statusbar->setObjectName("statusbar");
        BoardWindow->setStatusBar(statusbar);

        retranslateUi(BoardWindow);

        QMetaObject::connectSlotsByName(BoardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BoardWindow)
    {
        BoardWindow->setWindowTitle(QCoreApplication::translate("BoardWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = leaderboardTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BoardWindow", "Player Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = leaderboardTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BoardWindow", "Score", nullptr));
        rankLabel->setText(QCoreApplication::translate("BoardWindow", "Your Rank: ", nullptr));
        closeButton->setText(QCoreApplication::translate("BoardWindow", "Close", nullptr));
        label->setText(QCoreApplication::translate("BoardWindow", "LEADERBOARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardWindow: public Ui_BoardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDWINDOW_H

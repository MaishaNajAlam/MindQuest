/********************************************************************************
** Form generated from reading UI file 'profile_board.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_BOARD_H
#define UI_PROFILE_BOARD_H

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

class Ui_profile_board
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTableWidget *leaderboardTable;
    QPushButton *closeButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *profile_board)
    {
        if (profile_board->objectName().isEmpty())
            profile_board->setObjectName("profile_board");
        profile_board->resize(775, 531);
        centralwidget = new QWidget(profile_board);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 10, 711, 501));
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
        closeButton = new QPushButton(groupBox);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(590, 440, 101, 39));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 30, 171, 31));
        label->setFont(font);
        profile_board->setCentralWidget(centralwidget);
        menubar = new QMenuBar(profile_board);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 775, 22));
        profile_board->setMenuBar(menubar);
        statusbar = new QStatusBar(profile_board);
        statusbar->setObjectName("statusbar");
        profile_board->setStatusBar(statusbar);

        retranslateUi(profile_board);

        QMetaObject::connectSlotsByName(profile_board);
    } // setupUi

    void retranslateUi(QMainWindow *profile_board)
    {
        profile_board->setWindowTitle(QCoreApplication::translate("profile_board", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        QTableWidgetItem *___qtablewidgetitem = leaderboardTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("profile_board", "Player Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = leaderboardTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("profile_board", "Score", nullptr));
        closeButton->setText(QCoreApplication::translate("profile_board", "Close", nullptr));
        label->setText(QCoreApplication::translate("profile_board", "LEADERBOARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profile_board: public Ui_profile_board {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_BOARD_H

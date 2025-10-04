/********************************************************************************
** Form generated from reading UI file 'leaderboardwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARDWINDOW_H
#define UI_LEADERBOARDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LeaderBoardWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *leaderboardTable;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *rankLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LeaderBoardWindow)
    {
        if (LeaderBoardWindow->objectName().isEmpty())
            LeaderBoardWindow->setObjectName("LeaderBoardWindow");
        LeaderBoardWindow->resize(819, 490);
        centralwidget = new QWidget(LeaderBoardWindow);
        centralwidget->setObjectName("centralwidget");
        leaderboardTable = new QTableWidget(centralwidget);
        if (leaderboardTable->columnCount() < 2)
            leaderboardTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        leaderboardTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        leaderboardTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        leaderboardTable->setObjectName("leaderboardTable");
        leaderboardTable->setEnabled(false);
        leaderboardTable->setGeometry(QRect(250, 10, 221, 361));
        leaderboardTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(640, 400, 75, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 320, 49, 16));
        rankLabel = new QLabel(centralwidget);
        rankLabel->setObjectName("rankLabel");
        rankLabel->setGeometry(QRect(250, 380, 111, 20));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        rankLabel->setFont(font);
        LeaderBoardWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LeaderBoardWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 819, 22));
        LeaderBoardWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LeaderBoardWindow);
        statusbar->setObjectName("statusbar");
        LeaderBoardWindow->setStatusBar(statusbar);

        retranslateUi(LeaderBoardWindow);

        QMetaObject::connectSlotsByName(LeaderBoardWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LeaderBoardWindow)
    {
        LeaderBoardWindow->setWindowTitle(QCoreApplication::translate("LeaderBoardWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = leaderboardTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("LeaderBoardWindow", "Player Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = leaderboardTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("LeaderBoardWindow", "Score", nullptr));
        pushButton->setText(QCoreApplication::translate("LeaderBoardWindow", "close", nullptr));
        label->setText(QString());
        rankLabel->setText(QCoreApplication::translate("LeaderBoardWindow", "Your Rank:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LeaderBoardWindow: public Ui_LeaderBoardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARDWINDOW_H

#include "profile_board.h"
#include "ui_profile_board.h"
#include "userfront.h"

profile_board::profile_board(QString user,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::profile_board),currentUserName(user)
{
    ui->setupUi(this);
    displayLeaderboard();
}

profile_board::~profile_board()
{
    delete ui;
}

void profile_board::displayLeaderboard() {
    Leaderboard lb;
    QVector<PlayerScore> topScores = lb.getTop10();

    ui->leaderboardTable->setRowCount(topScores.size());
    ui->leaderboardTable->setColumnCount(2);
    ui->leaderboardTable->setHorizontalHeaderLabels({"Name", "Score"});

    for (int i = 0; i < topScores.size(); ++i) {
        ui->leaderboardTable->setItem(i, 0, new QTableWidgetItem(topScores[i].name));
        ui->leaderboardTable->setItem(i, 1, new QTableWidgetItem(QString::number(topScores[i].score)));
    }

    ui->leaderboardTable->resizeColumnsToContents();
}

void profile_board::on_closeButton_clicked()
{
    UserFront* u=new UserFront(currentUserName);
    u->show();
    this->hide();
}



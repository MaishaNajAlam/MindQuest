#include "boardwindow.h"
#include "ui_boardwindow.h"
#include"userloginsystem.h"
#include"userfront.h"
BoardWindow::BoardWindow(const QString &playerName, int playerScore, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::BoardWindow), leaderboard(), playerName(playerName), playerScore(playerScore) {
    ui->setupUi(this);
    leaderboard.addScore(playerName, playerScore);

    QVector<PlayerScore> topPlayers = leaderboard.getTop10();
    ui->leaderboardTable->setRowCount(topPlayers.size());
    ui->leaderboardTable->setColumnCount(2);
    ui->leaderboardTable->setHorizontalHeaderLabels({"Name", "Score"});

    for (int i = 0; i < topPlayers.size(); ++i) {
        ui->leaderboardTable->setItem(i, 0, new QTableWidgetItem(topPlayers[i].name));
        ui->leaderboardTable->setItem(i, 1, new QTableWidgetItem(QString::number(topPlayers[i].score)));
    }

    int rank = leaderboard.getPlayerRank(playerName, playerScore);
    if (rank > 10) {
        ui->rankLabel->setText(QString("Your rank: %1 😢").arg(rank));
    } else {
        ui->rankLabel->setText(QString("Your rank: %1 🎉").arg(rank));
    }
}


BoardWindow::~BoardWindow() {
    delete ui;
}

void BoardWindow::on_closeButton_clicked()
{
    UserFront* userWin=new UserFront(playerName);
    userWin->show();
    this->hide();
}


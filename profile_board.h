#ifndef PROFILE_BOARD_H
#define PROFILE_BOARD_H

#include <QMainWindow>
#include "leaderboard.h"

namespace Ui {
class profile_board;
}

class profile_board : public QMainWindow
{
    Q_OBJECT

public:
    explicit profile_board(QString user,QWidget *parent = nullptr);
    ~profile_board();


private slots:
    void on_closeButton_clicked();

private:
    Ui::profile_board *ui;
    void displayLeaderboard();
    QString currentUserName;
};

#endif // PROFILE_BOARD_H

#ifndef BOARDWINDOW_H
#define BOARDWINDOW_H

#include <QMainWindow>
#include "leaderboard.h"

namespace Ui {
class BoardWindow;
}

class BoardWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BoardWindow(const QString &playerName, int playerScore, QWidget *parent = nullptr);
    ~BoardWindow();

private slots:
    void on_closeButton_clicked();

private:
    Ui::BoardWindow *ui;
    Leaderboard leaderboard;
    QString playerName;
    int playerScore;
};

#endif // BOARDWINDOW_H

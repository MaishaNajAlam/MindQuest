#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QString>
#include <QVector>

struct PlayerScore {
    QString name;
    int score;
};

class Leaderboard {
public:
    Leaderboard();
    void addScore(const QString &playerName, int score);
    QVector<PlayerScore> getTop10();
    int getPlayerRank(const QString &playerName, int score);
    QVector<PlayerScore> getTopScores(int count);

private:
    QVector<PlayerScore> scores;
    void loadScores();
    void saveScores();
    void sortScores();
};

#endif // LEADERBOARD_H

#include "leaderboard.h"
#include <QFile>
#include <QTextStream>
#include <algorithm>

Leaderboard::Leaderboard() {
    loadScores();
}

void Leaderboard::loadScores() {
    scores.clear();
    QFile file("leaderboard.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",");
        if (parts.size() == 2) {
            PlayerScore ps { parts[0], parts[1].toInt() };
            scores.append(ps);
        }
    }
    file.close();
    sortScores();
}

void Leaderboard::saveScores() {
    QFile file("leaderboard.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) return;

    QTextStream out(&file);
    for (const PlayerScore &ps : scores) {
        out << ps.name << "," << ps.score << "\n";
    }
    file.close();
}

void Leaderboard::addScore(const QString &playerName, int score) {
    bool playerExists = false;

    // Update existing player's score
    for (PlayerScore &ps : scores) {
        if (ps.name == playerName) {
            ps.score = score;  // Update with the latest score
            playerExists = true;
            break;
        }
    }

    // If player does not exist, add a new entry
    if (!playerExists) {
        scores.append({playerName, score});
    }

    sortScores();
    saveScores();
}


void Leaderboard::sortScores() {
    std::sort(scores.begin(), scores.end(), [](const PlayerScore &a, const PlayerScore &b) {
        return a.score > b.score;
    });
    if (scores.size() > 100) {
        scores.resize(100);
    }
}


QVector<PlayerScore> Leaderboard::getTop10() {
    return scores.mid(0, std::min(10, static_cast<int>(scores.size())));

}

int Leaderboard::getPlayerRank(const QString &playerName, int score) {
    for (int i = 0; i < scores.size(); ++i) {
        if (scores[i].name == playerName && scores[i].score == score) {
            return i + 1;
        }
    }
    return -1;
}

QVector<PlayerScore> Leaderboard::getTopScores(int count) {
    return scores.mid(0, std::min(count, static_cast<int>(scores.size())));

}

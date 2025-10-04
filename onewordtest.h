#ifndef ONEWORDTEST_H
#define ONEWORDTEST_H

#include <QMainWindow>
#include <QTimer>
#include "quizmanager.h"

namespace Ui {
class oneWordTest;
}

class oneWordTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit oneWordTest(QString& user,const QString& topic, const QString& questionType, QWidget *parent = nullptr);
    ~oneWordTest();

private slots:

    void updateTimer();
    void on_pushButton_clicked();

private:
    Ui::oneWordTest *ui;
    QuizManager *quizManager;
    int score;
    int currentIndex;
    int answeredQuestions;
    int totalQuestions;
    int timeRemaining;
    QString correctAnswer;
    QString currentUserName;
    QTimer *timer; // Timer for countdown

    void loadNextQuestion();
    void checkAnswer();
    void proceedToNextQuestion();
    void updateScoreDisplay();
    void updateProgressBar();
};

#endif // ONEWORDTEST_H

#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "quizmanager.h"

namespace Ui {
class testWindow;
}

class testWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit testWindow(QString& user,const QString& topic, const QString& questionType, QWidget *parent = nullptr);
    ~testWindow();

private slots:
    void loadAndStartQuiz();
    void on_submit_clicked();
    void updateScoreDisplay();
    void updateProgressBar();
    void updateTimer();
    void timeUp();

private:
    Ui::testWindow *ui;

    QuizManager *quizManager;
    int score;
    int answeredQuestions;
    int currentIndex;
    int totalQuestions;
    QString correctAnswer,currentUserName;
    QTimer *timer;
    int timeRemaining;
};

#endif // TESTWINDOW_H

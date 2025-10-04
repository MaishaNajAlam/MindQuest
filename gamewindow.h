#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include "ui_gamewindow.h" // Assuming you are using the auto-generated UI from Qt Designer
#include "quizmanager.h"    // Include the QuizManager class for handling quiz logic
#include "leaderboard.h"
#include "boardwindow.h"
QT_BEGIN_NAMESPACE

namespace Ui {
class GameWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QString user,QWidget *parent = nullptr);
    ~GameWindow();


private slots:
    void on_submit_clicked();
    void on_button50_clicked();
    void on_buttonSwap_clicked();
     void finishGame();



private:
    Ui::GameWindow *ui;
    QuizManager *quizManager;    // Instance of QuizManager to handle the quiz logic
    int currentIndex;
    QString playerName;
    QString correctAnswer;
    void loadAndStartQuiz();  // Function to load questions and start the quiz
    bool lifeline5050Used = false;
    bool swapQUsed = false;
    int score;
    int totalQuestions;
    int answeredQuestions;
    void updateScoreDisplay();  // Update the score display in the UI
    void updateProgressBar();
    void showLeaderboard();
    Leaderboard leaderboard;



};

QT_END_NAMESPACE

#endif // GAMEWI

#ifndef PRACTICEWINDOW_H
#define PRACTICEWINDOW_H

#include <QMainWindow>
#include "ui_practicewindow.h"
#include "quizmanager.h"

namespace Ui {
class practiceWindow;
}

class practiceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit practiceWindow(QString& user,const QString& topic, const QString& questionType, QWidget *parent = nullptr);
    ~practiceWindow();

private slots:
    void on_submit_clicked();
    void updateScoreDisplay();
    void updateProgressBar();

private:
    Ui::practiceWindow *ui;
    QuizManager *quizManager;    // Instance of QuizManager to handle the quiz logic
    int currentIndex;
    int score;
    int answeredQuestions;
    int totalQuestions;
    QString correctAnswer;
      QString currentUserName;

    void loadAndStartQuiz();

};

#endif // PRACTICEWINDOW_H

#ifndef ONEWORDPRACTICE_H
#define ONEWORDPRACTICE_H

#include <QMainWindow>
#include "quizmanager.h"

namespace Ui {
class OneWordPractice;
}

class OneWordPractice : public QMainWindow
{
    Q_OBJECT

public:
    explicit OneWordPractice(QString& user,const QString& topic, const QString& questionType, QWidget *parent=nullptr);
    ~OneWordPractice();

private slots:
    void on_submitButton_clicked();
    void updateScoreDisplay();
    void updateProgressBar();
private:
    Ui::OneWordPractice *ui;
    QuizManager *quizManager;
    int score;
    int totalQuestions;
    int answeredQuestions;
    int currentIndex;
    QString correctAnswer;
      QString currentUserName;
    void loadNextQuestion();
};

#endif // ONEWORDPRACTICE_H

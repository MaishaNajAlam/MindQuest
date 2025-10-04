#ifndef QUIZMANAGER_H
#define QUIZMANAGER_H

#include "Question.h"
#include "MCQQuestion.h"
#include "OneWordQuestion.h"
#include <QVector>
#include <QString>

class QuizManager
{
private:
    QVector<Question*> questions;
    QVector<Question*> selectedQuestions;
    //int score;

public:
    QuizManager();
    ~QuizManager();

    bool loadQuestions(const QString &filename, const QString &type);
    void selectRandomQuestions(int count);
    void startQuiz(); // Modify to interact with the UI
    // int getScore() const { return score; }
    // void setScore(int s) { score = s; }

    QVector<Question*> getSelectedQuestions() const { return selectedQuestions; }  // Add this getter
    void nextQuestion();

    void swapQuestion(int index);

};

#endif // QUIZMANAGER_H

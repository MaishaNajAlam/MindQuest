#ifndef QUESTION_H
#define QUESTION_H

#include <QString>
#include <QVector>

class Question
{
public:
    QString questionText;
    QString correctAnswer;

public:
    Question(QString qText, QString answer)
        : questionText(qText), correctAnswer(answer) {}

    virtual void displayQuestion() = 0;
    virtual bool checkAnswer(const QString &userAnswer) = 0;
    virtual ~Question() {}

    QString getCorrectAnswer() const { return correctAnswer; }
    QString getQuestionText() const{ return questionText;}
};

#endif // QUESTION_H

#ifndef ONEWORDQUESTION_H
#define ONEWORDQUESTION_H

#include "Question.h"


class OneWordQuestion : public Question
{
public:
    OneWordQuestion(QString qText, QString answer)
        : Question(qText, answer) {}

    void displayQuestion() override;
    bool checkAnswer(const QString &userAnswer) override;
};

#endif // ONEWORDQUESTION_H

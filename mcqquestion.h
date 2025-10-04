#ifndef MCQQUESTION_H
#define MCQQUESTION_H

#include "Question.h"

class MCQQuestion : public Question
{
private:
    QVector<QString> options;

public:
    MCQQuestion(QString qText, QString answer, QVector<QString> opts)
        : Question(qText, answer), options(opts) {}

    void displayQuestion() override;
    bool checkAnswer(const QString &userAnswer) override;
    QVector<QString> getOptions() const { return options; }
   // QString getQuestionText() const;
};

#endif // MCQQUESTION_H

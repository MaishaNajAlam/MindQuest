#include "OneWordQuestion.h"
#include <QDebug>
#include <algorithm>

void OneWordQuestion::displayQuestion()
{
    qDebug() << questionText << " (Enter your answer): ";
}

bool OneWordQuestion::checkAnswer(const QString &userAnswer)
{
    QString userAns = userAnswer.toLower();
    QString correctAns = correctAnswer.toLower();
    return userAns == correctAns;
}

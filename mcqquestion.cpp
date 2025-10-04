#include "MCQQuestion.h"
#include <QDebug>


bool MCQQuestion::checkAnswer(const QString &userAnswer)
{
    int index = userAnswer.toInt() - 1;
    if (index >= 0 && index < options.size()) {
        return options[index] == correctAnswer;
    }
    return userAnswer == correctAnswer;
}
void MCQQuestion::displayQuestion(){
    qDebug()<<questionText;
}


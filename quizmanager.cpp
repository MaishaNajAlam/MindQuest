#include "QuizManager.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <cstdlib>
#include <ctime>
#include<algorithm>
#include <QRandomGenerator>


QuizManager::QuizManager(){}

QuizManager::~QuizManager()
{
    for (auto q : questions) {
        delete q;
    }
}


bool QuizManager::loadQuestions(const QString &filename, const QString &type)
{
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error: Could not open file!";
        return false;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(',');
        QString qText = fields[0];
        QString correctAnswer = fields.last();
        QVector<QString> options = { fields[1], fields[2], fields[3], fields[4] };

        if (type == "MCQ") {
            questions.push_back(new MCQQuestion(qText, correctAnswer, options));
        } else {
            questions.push_back(new OneWordQuestion(qText, correctAnswer));
        }
    }

    file.close();
    return true;
}

void QuizManager::selectRandomQuestions(int count)
{
    if (questions.size() < count) {
        qDebug() << "Not enough questions available!";
        return;
    }

    QVector<int> indices;
    while (indices.size() < count) {
        int index = rand() % questions.size();
        if (!indices.contains(index)) {
            indices.push_back(index);
            selectedQuestions.push_back(questions[index]);
        }
    }
}

void QuizManager::swapQuestion(int index)
{
    if (questions.size() <= selectedQuestions.size()) {
        return;  // No questions left
    }

    QVector<Question*> remainingQuestions;

    // Finding  questions that haven't been used yet
    for (Question* q : questions) {
        if (!selectedQuestions.contains(q)) {
            remainingQuestions.append(q);
        }
    }

    // ensures there is at least one question to swap with
    if (!remainingQuestions.isEmpty() && index < selectedQuestions.size()) {
        int randIndex = QRandomGenerator::global()->bounded(remainingQuestions.size());


        selectedQuestions[index] = remainingQuestions[randIndex]; // Replace it
    }
}





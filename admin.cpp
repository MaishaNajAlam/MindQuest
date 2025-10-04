#include "admin.h"

void Admin::signUp() {
    std::cout << "Admin signup is not allowed.\n";
}

bool Admin::login(const QString& inputUsername, const QString& inputPassword) {
    try {
        if (inputUsername != "admin") {
            ErrorHandler::throwError("Invalid admin username.");
        }

        QFile file("admin.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            ErrorHandler::throwError("Admin password file missing.");
        }

        QTextStream in(&file);
        QString storedPassword;
        in >> storedPassword;
        file.close();

        if (inputPassword == storedPassword) {
            QMessageBox::information(nullptr, "Login Successful", "Welcome, Admin!");
            return true;
        } else {
            ErrorHandler::throwError("Incorrect admin password.");
        }
    } catch (const std::runtime_error& e) {
        QMessageBox::critical(nullptr, "Login Failed", e.what());
        return false;
    }
}

void Admin::addQuestion(QLineEdit* lineEdit_topic, QLineEdit* lineEdit_q, QLineEdit* lineEdit_opA, QLineEdit* lineEdit_opB, QLineEdit* lineEdit_opC, QLineEdit* lineEdit_opD, QLineEdit* lineEdit_corr) {
    try {
        QString topic = lineEdit_topic->text().trimmed();
        QString question = lineEdit_q->text().trimmed();
        QString optionA = lineEdit_opA->text().trimmed();
        QString optionB = lineEdit_opB->text().trimmed();
        QString optionC = lineEdit_opC->text().trimmed();
        QString optionD = lineEdit_opD->text().trimmed();
        QString correctAnswer = lineEdit_corr->text().trimmed();

        if (topic.isEmpty() || question.isEmpty() || optionA.isEmpty() || optionB.isEmpty() || optionC.isEmpty() || optionD.isEmpty()) {
            ErrorHandler::throwError("All fields must be filled.");
        }

        QFile topicsFile("topics.txt");
        if (!topicsFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            ErrorHandler::throwError("Unable to open topics file.");
        }

        QTextStream in(&topicsFile);
        bool topicExists = false;
        while (!in.atEnd()) {
            if (in.readLine().trimmed() == topic) {
                topicExists = true;
                break;
            }
        }
        topicsFile.close();

        if (!topicExists && topic != "Game") {
            ErrorHandler::throwError("Topic does not exist. Add the topic first.");
        }

        QString filename = (topic == "Game") ? "questions.txt" : "questions_" + topic + ".txt";
        QFile file(filename);
        if (!file.open(QIODevice::Append | QIODevice::Text)) {
            ErrorHandler::throwError("Error opening file.");
        }

        QTextStream out(&file);
        out << question << "," << optionA << "," << optionB << "," << optionC << "," << optionD << "," << correctAnswer << "\n";
        file.close();

        QMessageBox::information(nullptr, "Success", "Question added successfully.");
    } catch (const std::runtime_error& e) {
        QMessageBox::warning(nullptr, "Error", e.what());
    }
}

void Admin::addTopic(QLineEdit* lineEdit_addt, QLabel* label_addt, QPushButton* pushButton_addt) {
    try {
        QString newTopic = lineEdit_addt->text().trimmed();

        if (newTopic.isEmpty()) {
            ErrorHandler::throwError("Topic name cannot be empty.");
        }

        QFile topicsFile("topics.txt");
        if (!topicsFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            ErrorHandler::throwError("Unable to open topics file.");
        }

        QTextStream in(&topicsFile);
        while (!in.atEnd()) {
            if (in.readLine().trimmed() == newTopic) {
                ErrorHandler::throwError("Topic already exists.");
            }
        }
        topicsFile.close();

        if (!topicsFile.open(QIODevice::Append | QIODevice::Text)) {
            ErrorHandler::throwError("Error opening topics file.");
        }

        QTextStream out(&topicsFile);
        out << newTopic << "\n";
        topicsFile.close();

        QMessageBox::information(nullptr, "Success", "Topic added successfully.");
        lineEdit_addt->clear();
    } catch (const std::runtime_error& e) {
        QMessageBox::information(nullptr, "Error", e.what());
    }
}

void Admin::deleteTopic(QLineEdit* lineEdit_dt, QLabel* label_dt, QPushButton* pushButton_dt) {
    try {
        QString topic = lineEdit_dt->text().trimmed();

        if (topic.isEmpty()) {
            ErrorHandler::throwError("Topic name cannot be empty.");
        }

        QFile topicsFile("topics.txt");
        if (!topicsFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            ErrorHandler::throwError("Unable to open topics file.");
        }

        QTextStream in(&topicsFile);
        QStringList topics;
        bool topicExists = false;

        while (!in.atEnd()) {
            QString line = in.readLine().trimmed();
            if (line == topic) {
                topicExists = true;
            } else {
                topics.append(line);
            }
        }
        topicsFile.close();

        if (!topicExists) {
            ErrorHandler::throwError("Topic not found.");
        }

        if (!topicsFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
            ErrorHandler::throwError("Error opening topics file for writing.");
        }

        QTextStream out(&topicsFile);
        for (const QString& t : topics) {
            out << t << "\n";
        }
        topicsFile.close();

        QString filename = "questions_" + topic + ".txt";
        QFile::remove(filename);

        QMessageBox::information(nullptr, "Success", "Topic deleted successfully.");
        lineEdit_dt->clear();
    } catch (const std::runtime_error& e) {
        QMessageBox::warning(nullptr, "Error", e.what());
    }
}


void Admin::deleteQuestionByLineNumber(QLineEdit* lineEdit_topic, QLineEdit* lineEdit_number) {
    try {
        QString topic = lineEdit_topic->text().trimmed();
        bool ok;
        int lineNumber = lineEdit_number->text().trimmed().toInt(&ok);

        if (!ok || lineNumber <= 0) {
            ErrorHandler::throwError("Please enter a valid line number.");
            return;
        }

        QString filename = (topic == "Game") ? "questions.txt" : "questions_" + topic + ".txt";
        QFile file(filename);
        if (!file.exists()) {
            ErrorHandler::throwError("Topic does not exist.");
            return;
        }

        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            ErrorHandler::throwError("Failed to open file.");
            return;
        }

        QTextStream in(&file);
        QStringList questions;
        int currentLine = 0;

        while (!in.atEnd()) {
            currentLine++;
            QString line = in.readLine().trimmed();
            if (currentLine != lineNumber) {
                questions.append(line);
            }
        }
        file.close();

        if (currentLine < lineNumber) {
            ErrorHandler::throwError("Invalid line number.");
            return;
        }

        // Write updated questions back to file
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
            ErrorHandler::throwError("Error opening file for writing.");
            return;
        }

        QTextStream out(&file);
        for (const QString& q : questions) {
            out << q << "\n";
        }
        file.close();

        QMessageBox::information(nullptr, "Success", "Question deleted successfully.");
        lineEdit_number->clear();

    } catch (const std::runtime_error& e) {
        QMessageBox::warning(nullptr, "Error", e.what());
    }
}

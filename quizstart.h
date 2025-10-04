#ifndef QUIZSTART_H
#define QUIZSTART_H

#include <QMainWindow>

namespace Ui {
class QuizStart;
}

class QuizStart : public QMainWindow
{
    Q_OBJECT

public:
    explicit QuizStart(QString& user,QString& mode,QString& topic,QString& type,QWidget *parent = nullptr);
    ~QuizStart();

private slots:
    void on_pushButton_clicked();

private:
    Ui::QuizStart *ui;
    QString currentUserName;
    QString Mode,Topic,questype;
};

#endif // QUIZSTART_H

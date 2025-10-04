#ifndef USERFRONT_H
#define USERFRONT_H

#include <QMainWindow>

namespace Ui {
class UserFront;
}

class UserFront : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserFront(const QString &username, QWidget *parent = nullptr); // Updated constructor
    ~UserFront();


private slots:
    void on_startButton_clicked();
    void on_profileButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::UserFront *ui;
    QString currentUsername; // Store the current username
};

#endif // USERFRONT_H

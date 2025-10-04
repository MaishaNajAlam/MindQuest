#ifndef USERLOGINSYSTEM_H
#define USERLOGINSYSTEM_H

#include <QMainWindow>

namespace Ui {
class UserLoginSystem;
}

class UserLoginSystem : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserLoginSystem(QWidget *parent = nullptr);
    ~UserLoginSystem();
protected:
    void keyPressEvent(QKeyEvent *event) override;
private slots:
    void on_pushButton_clicked();

private:
    Ui::UserLoginSystem *ui;
};

#endif // USERLOGINSYSTEM_H

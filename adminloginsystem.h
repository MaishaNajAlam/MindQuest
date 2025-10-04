#ifndef ADMINLOGINSYSTEM_H
#define ADMINLOGINSYSTEM_H

#include <QMainWindow>

namespace Ui {
class AdminLoginSystem;
}

class AdminLoginSystem : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminLoginSystem(QWidget *parent = nullptr);
    ~AdminLoginSystem();

private:
    Ui::AdminLoginSystem *ui;
};

#endif // ADMINLOGINSYSTEM_H

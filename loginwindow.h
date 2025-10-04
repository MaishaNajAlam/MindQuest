#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include<QKeyEvent>

namespace Ui {
class loginWindow;
}

class loginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginWindow(QWidget *parent = nullptr);
    ~loginWindow();

protected:
    void keyPressEvent(QKeyEvent *event) override;
private:
    Ui::loginWindow *ui;

private slots:
    void handleLogin();



};

#endif // LOGINWINDOW_H

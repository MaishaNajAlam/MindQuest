#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QMainWindow>

namespace Ui {
class SignUpWindow;
}

class SignUpWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignUpWindow(QWidget *parent = nullptr);
    ~SignUpWindow();
protected:
    void keyPressEvent(QKeyEvent *event) override;
private:
    Ui::SignUpWindow *ui;
private slots:
    void handleSignup();
};

#endif // SIGNUPWINDOW_H

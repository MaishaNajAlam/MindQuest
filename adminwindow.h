#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class adminWindow;
}

class adminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminWindow(QWidget *parent = nullptr);
    ~adminWindow();

private slots:
    void on_pushButton_addquestion_clicked();
    void on_pushButton_addtopic_clicked();
    void on_pushButton_deletetopic_clicked();
    void on_pushButton_deletequestion_clicked();
    void on_pushButton_clicked();

private:
    Ui::adminWindow *ui;
};

#endif // ADMINWINDOW_H

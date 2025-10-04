#ifndef ADDQUESTION_H
#define ADDQUESTION_H

#include <QMainWindow>

namespace Ui {
class addquestion;
}

class addquestion : public QMainWindow
{
    Q_OBJECT

public:
    explicit addquestion(QWidget *parent = nullptr);
    ~addquestion();
private slots:
    void on_pushButton_add_clicked();
private:
    Ui::addquestion *ui;
};


#endif // ADDQUESTION_H

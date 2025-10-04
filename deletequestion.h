#ifndef DELETEQUESTION_H
#define DELETEQUESTION_H
#include"admin.h"
#include <QMainWindow>

namespace Ui {
class deletequestion;
}

class deletequestion : public QMainWindow
{
    Q_OBJECT

public:
    explicit deletequestion(QWidget *parent = nullptr);
    ~deletequestion();
private slots:
    void on_pushButton_dq_clicked();

private:
    Ui::deletequestion *ui;
};

#endif // DELETEQUESTION_H

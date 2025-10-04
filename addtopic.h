#ifndef ADDTOPIC_H
#define ADDTOPIC_H

#include <QMainWindow>

namespace Ui {
class addtopic;
}

class addtopic : public QMainWindow
{
    Q_OBJECT

public:
    explicit addtopic(QWidget *parent = nullptr);
    ~addtopic();
private slots:
    void on_pushButton_addt_clicked();

private:
    Ui::addtopic *ui;
};

#endif // ADDTOPIC_H

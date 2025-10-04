#ifndef DELETETOPIC_H
#define DELETETOPIC_H

#include <QMainWindow>

namespace Ui {
class deletetopic;
}

class deletetopic : public QMainWindow
{
    Q_OBJECT

public:
    explicit deletetopic(QWidget *parent = nullptr);
    ~deletetopic();
private slots:
    void on_pushButton_dt_clicked();

private:
    Ui::deletetopic *ui;
};

#endif // DELETETOPIC_H

#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class HomePage;
}
QT_END_NAMESPACE

class HomePage : public QMainWindow
{
    Q_OBJECT

public:
    HomePage(QWidget *parent = nullptr);
    ~HomePage();
protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:


private:
    Ui::HomePage *ui;
};
#endif // HOMEPAGE_H

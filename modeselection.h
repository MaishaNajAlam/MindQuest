#ifndef MODESELECTION_H
#define MODESELECTION_H

#include <QMainWindow>

namespace Ui {
class ModeSelection;
}

class ModeSelection : public QMainWindow
{
    Q_OBJECT

public:
    explicit ModeSelection(QString user,QWidget *parent = nullptr);
    ~ModeSelection();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void onGameModeSelected();
    void onTestModeSelected();
    void onPracticeModeSelected();


private:
    Ui::ModeSelection *ui;
    void navigateToNextScreen(QString &mode);
    QString currentUserName;
};

#endif // MODESELECTION_H

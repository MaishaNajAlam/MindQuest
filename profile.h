#ifndef PROFILE_H
#define PROFILE_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class Profile;
}

class Profile : public QMainWindow
{
    Q_OBJECT

public:
    explicit Profile(const QString &currentUsername, QWidget *parent = nullptr);
    ~Profile();

private slots:
    void on_pushButton_leaderboard_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::Profile *ui;
    void updateProfile(const QString &currentUsername);
    QString getUserEmail(const QString &currentUsername);
    QString currentUserName;
};

#endif // PROFILE_H


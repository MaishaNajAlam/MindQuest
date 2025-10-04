#include "profile.h"
#include "ui_profile.h"
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>
#include "leaderboard.h"
#include "profile_board.h"
#include "userfront.h"

Profile::Profile(const QString &user, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Profile),currentUserName(user)
{
    ui->setupUi(this);
    updateProfile(currentUserName);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::updateProfile(const QString &currentUsername)
{
    QString email = getUserEmail(currentUsername);
    ui->label_user->setText(currentUsername);
    ui->label_usermail->setText(email);
}

QString Profile::getUserEmail(const QString &currentUsername)
{
    QFile file("users.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Could not open the file!";
        return "";
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) continue;

        QStringList userData = line.split(" ");
        if (userData.size() == 3 && userData[0] == currentUsername) {
            file.close();
            return userData[2];
        }
    }

    file.close();
    return "";
}


void Profile::on_pushButton_leaderboard_clicked()
{
    profile_board* w=new profile_board(currentUserName);
    w->show();
    this->hide();
}


void Profile::on_pushButton_back_clicked()
{
    UserFront* u=new UserFront(currentUserName);
    u->show();
    this->hide();
}


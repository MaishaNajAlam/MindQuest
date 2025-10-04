#include "userfront.h"
#include "modeselection.h"
#include "ui_userfront.h"
#include "profile.h"
#include"homepage.h"
UserFront::UserFront(const QString &username, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserFront)
    , currentUsername(username) // Store the username
{
    ui->setupUi(this);
}

UserFront::~UserFront()
{
    delete ui;
}


void UserFront::on_startButton_clicked()
{
    ModeSelection *modeWin = new ModeSelection(currentUsername);
    modeWin->show();
    this->hide();
}

// Handle profile button click - Open Profile window
void UserFront::on_profileButton_clicked()
{
    Profile *profileWin = new Profile(currentUsername); // Pass username to Profile
    profileWin->show();
    this->hide();
}




void UserFront::on_pushButton_clicked()
{
    HomePage* h=new HomePage;
    h->show();
    this->hide();
}


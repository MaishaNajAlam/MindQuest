#include "adminloginsystem.h"
#include "ui_adminloginsystem.h"

AdminLoginSystem::AdminLoginSystem(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AdminLoginSystem)
{
    ui->setupUi(this);
}

AdminLoginSystem::~AdminLoginSystem()
{
    delete ui;
}

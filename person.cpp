#include "Person.h"

void Person::setUsername(const QString& uname) { username = uname; }
void Person::setPassword(const QString& pass) { password = pass; }

void Person::setEmail(const QString& e)
{
    email=e;
}
QString Person::getUsername() const { return username; }
QString Person::getPassword() const { return password; }

void Person::storeCredentials(){
    QFile file("users.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << username << " " << password << " " << email << "\n";
        file.close();
    }
}


QMap<QString, QString> Person::loadCredentials(){
    QMap<QString, QString> database;
    QFile file("users.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        QString uname, pass, email;
        while (!in.atEnd()) {
            in >> uname >> pass >> email;
            if (!uname.isEmpty() && !pass.isEmpty()) {
                database[uname] = pass;
            }
        }
        file.close();
    }
    return database;
}



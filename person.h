#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMap>

class Person {
protected:
    QString username;
    QString password;
    QString email;

public:
    void setUsername(const QString& uname);
    void setPassword(const QString& pass);
    void setEmail(const QString& e);

    QString getUsername() const;
    QString getPassword() const;
    QString  getEmail() const;

    virtual bool login(const QString& inputUsername, const QString& inputPassword) = 0;
    virtual void signUp() = 0;

    void storeCredentials();
    static QMap<QString, QString> loadCredentials();
};

#endif // PERSON_H

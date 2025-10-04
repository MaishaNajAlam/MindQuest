#ifndef USER_H
#define USER_H

#include "Person.h"

class User : public Person {
public:
    void signUp() override;
    bool login(const QString& inputUsername, const QString& inputPassword) override;
};

#endif // USER_H

#ifndef Account_H
#define Account_H

#include <string>

class Account {
private:
    int ID;
    std::string Name;
    std::string Email;
    std::string Password;
    float Balance;

public:
    std::string getName() const { return Name; }
    std::string getEmail() const { return Email; }
    std::string getPassword() const { return Password; }
    float getBalance() const { return Balance; }
};

#endif

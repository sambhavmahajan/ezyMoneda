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
    Account(int id, string &name, string &email, string password, float balance) {
        ID = id;
        Name = name;
        Email = email;
        Password = password;
        Balance = balance;
    }
    std::string getName() const { return Name; }
    std::string getEmail() const { return Email; }
    std::string getPassword() const { return Password; }
    float getBalance() const { return Balance; }
};

#endif

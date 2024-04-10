#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
#include "Account.h"
#include "encryption.h"
#include "Transaction.h"
#ifndef BACKEND

#define BACKEND

class server {
public:
	vector<Account> accounts;
	vector<Transaction> transactions;
    server(){
		Account account1(0, "John Doe", "john@example.com", "password123", 1000.0);
		Account account2(1, "Alice Smith", "alice@example.com", "password456", 2000.0);
		Account account3(2, "Bob Johnson", "bob@example.com", "password789", 3000.0);
		accounts.push_back(account1);
		accounts.push_back(account2);
		accounts.push_back(account3);
    }
};

#endif
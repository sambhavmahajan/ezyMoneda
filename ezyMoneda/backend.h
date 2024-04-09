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
private:
	const string accountLink;
	const string transactionLink;
public:
	Account* account;
	vector<Transaction> transactions;
	~server(){
		delete account;
	}
	server():account(nullptr){}
    server(int id, string password) : accountLink("accounts.txt"), transactionLink("transaction.txt"), account(nullptr) {
        ifstream file(accountLink);
        if (!file.is_open()) {
            return;
        }
        password = Hash(password);
        string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            int _id;
            if (iss >> _id) {
                if (id == _id) {
                    vector<string> data;
                    string temp;
                    while (iss >> temp) {
                        data.push_back(temp);
                    }
                    if (data.size() == 5 && data[4] == password) {
                        account = new Account(stoi(data[0]), data[1], data[2], data[3], stof(data[4]));
                    }
                    break;
                }
            }
        }
        file.close();
    }

	void openNew(int id, string password) {
		if (account) delete account;
		server(id, password);
	}
};

#endif
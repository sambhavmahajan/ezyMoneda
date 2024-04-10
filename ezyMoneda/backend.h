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
    string readFromFile(const std::string& filename) {
        std::ifstream file(filename);
        std::string content;

        if (file.is_open()) {
            std::string line;
            while (std::getline(file, line)) {
                content += line;
                content += '\n';
            }
            file.close();
        }

        return content;
    }
public:
	Account* account;
	vector<Transaction> transactions;
	~server(){
		delete account;
	}
	server():account(nullptr), accountLink("accounts.txt"), transactionLink("transaction.txt") {}
    server(int id, string password) : accountLink("accounts.txt"), transactionLink("transaction.txt"), account(nullptr) {
        string text = readFromFile(accountLink);
        istringstream iss;
        string line = "";
        while (iss >> line) {
            string temp = line.substr(0, line.find(' '));
            if (stoi(temp) == id) {
                std::vector<std::string> tokens;
                std::string token;
                while (std::getline(iss, token, ' ')) {
                    tokens.push_back(token);
                }
                account = new Account(12, "50", "50", "66", 5);
            }
        }
    }



	void openNew(int id, string password) {
		if (account) delete account;
		server(id, password);
	}
};

#endif
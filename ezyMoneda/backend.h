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
	bool isOk;
public:
	Account* account;
	vector<Transaction> transactions;
	bool status() const {
		return isOk;
	}
	~server(){
		delete account;
	}
	server(int id, string password) : accountLink("accounts.txt"), transactionLink("transaction.txt"){
		ifstream file(accountLink);
		password = Hash(password);
		string line;
		while (std::getline(file, line)) {
			std::istringstream iss(line);
			int _id;
			if (iss >> _id) {
				if (id == _id) {
					file.close();
					break;
				}
			}
		}
		vector<string> data;
		string temp = "";
		for (const char& c : line) {
			if (c == ' ') {
				if (temp.size() > 0) {
					data.push_back(temp);
					temp = "";
				}
				continue;
			}
			temp += c;
		}
		if (!temp.empty()) {
			data.push_back(temp);
		}
		if (data[4] != password) {
			isOk = false;
			return;
		}
		account = new Account(stoi(data[0]), data[1], data[2], data[3], stof(data[4]));
	}
};

#endif
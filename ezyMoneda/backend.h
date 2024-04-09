#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#include "Account.h"
#include "encryption.h"
#include "Transaction.h"
#ifndef BACKEND

#define BACKEND

class server {
private:
	Account account;
	vector<Transaction> transactions;
	const string accountLink;
	const string transactionLink;
public:
	server(int id, string password) : accountLink("accounts.txt"), transactionLink("transaction.txt"){
		ifstream file(accountLink);
		password = Hash(password);
		string line;
		string content = "";
		
	}
};

#endif
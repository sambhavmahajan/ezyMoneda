#include "TransactionHandler.h"
#include<iostream>
#include<string>
void Transaction_handler::addTransaction(float amount, Transaction type)
{
	
	transaction.push_back(amount);
}

const std::vector<float>& Transaction_handler::getAllTransactions() const

{
	return transaction;
}
int main() {
	Transaction_handler handler;
	std::string choice;
	do {
		float amount;
		std::cout << "Enter transaction amount: ";
		std::cin >> amount;

		
		std::string transactionType;
	}

	return 0;
}
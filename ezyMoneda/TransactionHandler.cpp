#include "TransactionHandler.h"
#include<iostream>
void Transaction_handler::addTransaction(float amount, Transaction type)
{
	
	transaction.push_back(amount);
}

const std::vector<float>& Transaction_handler::getAllTransactions() const

{
	
}

#ifndef TRANSACTION_HANDLER_H
#define TRANSACTION_HANDLER_H

#include "Transaction.h"
#include<vector>
class Transaction_handler {
private:
	std::vector<float> transaction;
public:
	void addTransaction(float amount, Transaction type);
	
	Transaction_handler() = default;
};
#endif


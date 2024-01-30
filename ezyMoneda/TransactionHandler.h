#ifndef TRANSACTION_HANDLER_H
#define TRANSACTION_HANDLER_H

#include "Transaction.h"
#include<vector>
class Transaction_handler {
private:
	std::vector<float> transaction;
public:
	void addTransaction(float amount, Transaction type);
	const std::vector<Transaction>& getAllTransactions() const;

	Transaction_handler() = default;
};
#endif


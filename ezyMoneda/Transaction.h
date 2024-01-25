#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <ctime>
enum transactionType {
	DEBIT, CREDIT
};
class Transaction {
private:
	size_t id;
	time_t time;
};
#endif
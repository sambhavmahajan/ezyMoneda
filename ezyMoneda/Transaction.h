#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <ctime>
enum transactionType {
	DEBIT, CREDIT
};
class Transaction {
private:
	size_t _id;
	time_t _time;
	size_t _fromId;
	size_t _toId;
	float amount;
};
#endif
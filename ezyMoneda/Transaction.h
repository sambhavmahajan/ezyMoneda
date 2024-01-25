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
	float _amount;
	transactionType _transactionType;
public:
	Transaction(size_t Id, time_t Time, size_t toId, float amount, transactionType type);
};
#endif
#include "Transaction.h"

Transaction::Transaction(size_t Id, size_t toId, float amount, transactionType type) : _id(Id), _toId(toId), _amount(amount),_transactionType(type)
{
	time(&_time);
}

size_t Transaction::getValue() const
{
	return (_transactionType == CREDIT) ? _amount : -_amount;
}

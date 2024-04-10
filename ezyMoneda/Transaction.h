#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <ctime>
class Transaction {
public:
	time_t _time;
	int _fromId;
	int _toId;
	float _amount;
	Transaction(int fromId, int toId, float amount) {
		_fromId = fromId;
		_toId = toId;
		_amount = amount;
		_time = time(0);
	}
};
#endif
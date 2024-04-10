#define OFFSET 942
#include "authenticator.h"
#include <cmath>
#include <ctime>
#include <string>
bool isValidCreditCard(std::string cardNumber)
{
	if (cardNumber.size() != 16) return false;
	int sum = 0;
	bool alternate = false;
	for (int i = cardNumber.length() - 1; i >= 0; --i) {
		int digit = cardNumber[i] - '0';

		if (alternate) {
			digit *= 2;
			if (digit > 9) {
				digit -= 9;
			}
		}
		sum += digit;
		alternate = !alternate;
	}

	return (sum % 10 == 0);
}
int otp(const std::string& name, const std::string& password)
{
	long long r = (std::time(0) / 30) % 100000 + 946;
	for (char c : name)
	{
		r *= static_cast<int> (c ^ 3 * c << 2);
	}
	for (char c : password)
	{
		r /= static_cast<int> (c ^ 5 / c >> 2);;
	}
	long long temp = r;
	long long temp2 = 0;
	while (temp > 0)
	{
		temp2 += (temp / 57) * (temp % 10);
		temp /= 10;
	}
	r = (temp2 ^ r + temp2) % 99991;
	r = (r < 0) ? -r : r;
	return static_cast<int>(r);
}
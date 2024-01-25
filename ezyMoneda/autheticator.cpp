#include "authenticator.h"
#include <cmath>
#include <ctime>
#include <string>
#define somerandomnum 942
bool isValidCreditCard(size_t cardnum)
{
	if (cardnum == 0) {
		return false;
	}
	int temp = cardnum;
	int digits = (int)(log10(cardnum) + 1);
	if (digits != 16) {
		return false; //visa cardnum have 16 digit length
	}
	int* arr = new int[digits];
	int i = digits - 1;
	for (; i >= 0; i--)
	{
		arr[i] = temp % 10;
		temp /= 10;
	}
	if (arr[0] != 4)
	{
		delete[] arr;
		return false; //visa cardnum starts with 4
	}
	int sum = 0;
	for (i = 0; i < digits; i++)
	{
		if (i % 2 == 1)
		{
			//every second digit is doubled.
			arr[i] *= 2;
			if (arr[i] > 9)
			{
				temp = arr[i] % 10 + 1; //if number greator than 10, tens place digit is always 1
				arr[i] = temp;
			}
		}
		sum += arr[i];
	}
	delete[] arr;
	return sum % 10 == 0;
}
int otp(std::string name, std::string password)
{
	int r = std::time(0) % 100000 - somerandomnum;
	for (char c : name)
	{
		r += c;
	}
	for (char c : password)
	{
		r += c;
	}
	return r;
}
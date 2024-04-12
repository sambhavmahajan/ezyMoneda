#include "authenticator.h"
#include <cmath>
#include <ctime>
#include <string>
using namespace std;
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
string generateTOTP(const string& name, const string& password) {
	string combined = name + password;
	auto now = std::time(nullptr);
	int counter = static_cast<int>(now / 30);
	combined += std::to_string(counter);
	int otp = std::hash<std::string>{}(combined) % 1000000;
	std::string formattedOTP = std::to_string(otp);
	while (formattedOTP.length() < 6) {
		formattedOTP = "0" + formattedOTP;
	}

	return formattedOTP;
}
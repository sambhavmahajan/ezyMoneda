#define OFFSET 942
#include "authenticator.h"
#include <cmath>
#include <ctime>
#include <string>
#include "httplib.h"
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
bool sendEmail(const std::string& To, emailType et, float amt) {
	std::string smtp_server = "server.com";  // will replace later
	int smtp_port = 587;
	std::string password = "password";  // will replace later
	std::string From = "email@gmail.com";  // Will replace later
	std::string Subject = "";
	std::string body = "";

	switch (et) {
	case wrongPassword:
		Subject = "Wrong password alert";
		body = "Someone tried to do a transaction with the wrong password, check your account for more details";
		break;
	case wrongAuthenticatorOtp:
		body = "Someone tried to do a transaction with the wrong OTP, check your account for more details";
		Subject = "OTP Entered wrong";
		break;
	case Debit:
		Subject = "Debit notification";
		body = "Debited " + std::to_string(-amt) + " from account";
		break;
	}

	httplib::Client cli(smtp_server.c_str(), smtp_port);

	std::string email_content = "From: " + From + "\r\n"
		+ "To: " + To + "\r\n"
		+ "Subject: " + Subject + "\r\n\r\n"
		+ body;

	auto res = cli.Post("/sendmail", email_content, "message/rfc822");

	if (res && res->status == 200) {
		return true;
	}
	return false;
}

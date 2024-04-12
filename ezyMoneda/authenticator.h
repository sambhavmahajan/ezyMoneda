#ifndef AUTHETICATOR_H
#define AUTHETICATOR_H
#include <string>
bool isValidCreditCard(std::string cardNumber);
std::string generateTOTP(const string& name, const string& password){}
enum emailType {
	wrongPassword, wrongAuthenticatorOtp, Debit
};
bool sendEmail(const std::string& To, emailType et, float amt);
#endif
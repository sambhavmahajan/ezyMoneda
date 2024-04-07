#ifndef AUTHETICATOR_H
#define AUTHETICATOR_H
#include <string>
bool isValidCreditCard(std::string cardNumber);
int otp(const std::string& name, const std::string& password);
enum emailType {
	wrongPassword, wrongAuthenticatorOtp, Debit
};
bool sendEmail(const std::string& To, emailType et, float amt);
#endif
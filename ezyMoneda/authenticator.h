#ifndef AUTHETICATOR_H
#define AUTHETICATOR_H
#include <string>
bool isValidCreditCard(size_t cardnum);
int otp(const std::string& name, const std::string& password);
#endif
#ifndef AUTHETICATOR_H
#define AUTHETICATOR_H
#include <string>
#include <iostream>
using namespace std;
bool isValidCreditCard(std::string cardNumber);
string generateTOTP(const string& name, const string& password);
#endif
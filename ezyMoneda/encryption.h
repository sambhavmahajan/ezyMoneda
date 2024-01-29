#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#define ASCII_A 65
#define Total_Upper 25
#define HASH_LENGTH 16
#include <string>
char convertToAlpha(char c);
std::string hash(std::string input);
#endif
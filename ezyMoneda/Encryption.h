#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#include<iostream>
#include<string>
#define ENCRYPTIONKEY 90767

std::string encrypt(std::string& password , std::string& key  );
std::string encryptedpassword = "";

for (size_t i = 0; i < password.length(); ++i) {
    char currentLetter = password[i];

    char keyLetter = key[i % key.length()];


    char encryptedLetter = currentLetter ^ keyLetter;

    encryptedPassword += encryptedLetter;
}
return encryptedPassword;

int main() {
    std::string originalPassword;
    std::cout << "Enter the original password: ";
    std::cin >> originalPassword;

    std::string encryptionKey = "EncryptionKey";

    std::string userPassword;
    std::cout << "Enter your password: ";
    std::cin >> userPassword;

  
    std::string encryptedOriginalPassword = encrypt(originalPassword, encryptionKey);
    std::string encryptedUserPassword = encrypt(userPassword, encryptionKey);

   
    
#endif
#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#include<iostream>
#include<string>
#define ENCRYPTIONKEY 90767

std::string encrypt(std::string& password , std::string& key  ){
    std::string encryptedpassword = "";

    for (size_t i = 0; i < password.length(); ++i) {
        char currentLetter = password[i];
    
        char keyLetter = key[i % key.length()];
        char encryptedLetter = currentLetter ^ keyLetter;
    
        encryptedPassword += encryptedLetter;
    }
    return encryptedPassword;
}  
#endif

#include "TransactionHandler.h"
#include <iostream>
#include <string>
#include "Transaction.h"
void Transaction_handler::addTransaction(float amount, Transaction type)
{
    transaction.push_back(amount);
}

const std::vector<float>& Transaction_handler::getAllTransactions() const
{
    return transaction;
}

int main() {
    Transaction_handler handler;
    std::string choice;
    do {
        float amount;
        std::cout << "Enter transaction amount: ";
        std::cin >> amount;

        std::string transactionType;
        do {
            std::cout << "Enter transaction type (Credit or Debit): ";
            std::cin >> transactionType;
        } 
       

    return 0;
}

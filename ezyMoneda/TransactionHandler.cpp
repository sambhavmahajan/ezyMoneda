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
        while (transactionType != "Credit" && transactionType != "Debit");

        Transaction type = (transactionType == "Credit") ? CREDIT : DEBIT;

        handler.addTransaction(amount, type);

        std::cout << "Do you want to add another transaction? (Yes/No): ";
        std::cin >> choice;

    }
    while (choice == "Yes" || choice == "yes");

    const std::vector<float>& transactions = handler.getAllTransactions();

    std::cout << "Transaction History:" << std::endl;

   


    return 0;
}

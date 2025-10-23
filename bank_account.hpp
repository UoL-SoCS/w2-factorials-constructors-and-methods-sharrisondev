#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(){
        // Implement the constructor
        accountNumber = "";
        accountHolderName = "";
        balance = 0.0;
    }

    BankAccount(const std::string& accNumber, const std::string& accHolder, double initialBalance){
        // Implement the constructor
        accountNumber = accNumber;
        accountHolderName = accHolder;
        balance = initialBalance;
    }

    // Deposit method
    void Deposit(double amount) {
        // Implement the Deposit method
        if(amount > 0){
            balance += amount;
            std::cout << "Deposited " << amount << " into account.\n";
        } else {
            std::cout << "The deposit must not be a negative amount.\n";
        }
    }

    // Withdraw method
    void Withdraw(double amount) {
        // Implement the Deposit method
        if(amount <= balance) {
           balance -= amount;
           std::cout << "Withdrawn " << amount << " from account.\n";
        } else {
           std::cout << "Insufficient balance to withdraw that amount.\n";
        }
    }

    // Display account information
    void DisplayAccountInfo() {
        // Implement the DisplayAccountInfo method
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }

    double GetBalance() const {
        std::cout << "Test" << std::endl;
        return balance;
    }
};



#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name_val, double balance_val, double int_rate) :
    name{ name_val }, balance{ balance_val }, int_rate{ int_rate } {}

// Deposit:
//      Amount supplied to deposit will be incremented by (amount * int_rate/100) 
//      and then the updated amount will be deposited
//
bool Savings_Account::deposit(double amount) {
    amount += amount * (int_rate / 100);
    if (amount < 0)
        return false;
    else {
        balance += amount;
        return true;
    }
}
bool Savings_Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    else
        return false;
}

void Savings_Account::print(std::ostream& os)const {
    os.precision(2);
    os << std::fixed;
    os << "[Savings Account : " << name << ": " << balance << ", " << int_rate << "%]";
}

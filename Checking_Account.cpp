#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string, double balance)
    : name{ name }, balance{ balance } {
}

bool Checking_Account::withdraw(double amount) {
    amount += per_check_fee;
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    }
    else
        return false;
}
bool Checking_Account::deposit(double amount) {
    if (amount < 0)
        return false;
    else {
        balance += amount;
        return true;
    }
}

void Checking_Account::print(std::ostream& os)const {
    os.precision(2);
    os << std::fixed;
    os << "[Checking Account : " << name << ": " << balance << "]";
}



#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : name{ name }, balance{ balance }, int_rate{ int_rate }, num_withdrawals{ 0 } {

}

// Deposit additional $50 bonus when amount >= $5000
bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold)
        amount += bonus_amount;
    amount += amount * (int_rate / 100);
    if (amount < 0)
        return false;
    else {
        balance += amount;
        return true;
    }
}


// Only allowed 3 withdrawals, each can be up to a maximum of 20% of the account's value
bool Trust_Account::withdraw(double amount) {
    if (num_withdrawals >= max_withdrawals || (amount > balance * max_withdraw_percent))
        return false;
    else {
        ++num_withdrawals;
        if (balance - amount >= 0) {
            balance -= amount;
            return true;
        }
        else
            return false;
    }
}

void Trust_Account::print(std::ostream& os)const {
    os.precision(2);
    os << std::fixed;
    os << "[Trust Account : " << name << ": " << balance << ", " << int_rate
        << "%, withdrawals: " << num_withdrawals << "]";
}


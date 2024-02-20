#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Base_Account.h"


class Savings_Account : public Base_Account {

private:
    static constexpr const char* def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    std::string name;
    double balance;
    double int_rate;
public:
    Savings_Account(std::string name_val = def_name, double balance_val = def_balance, double int_rate = def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;

    virtual void print(std::ostream& os)const override;


    virtual ~Savings_Account() {};
};

#endif // _SAVINGS_ACCOUNT_H_

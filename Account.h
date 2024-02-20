// Simple Account 
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "Base_Account.h"


class Account : public Base_Account {

protected:
    std::string name;
    double balance;
private:
    static constexpr const char* def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;

public:
    Account(std::string name_val = def_name, double balance_val = def_balance);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;

    virtual void print(std::ostream& os)const override;



    virtual ~Account() {};
};
#endif
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"


int main() {
    std::cout.precision(2);
    std::cout << std::fixed;

    Base_Account* ptr0 = new Trust_Account("Leo", 100, 2.6);
    std::cout << *ptr0 << std::endl;
    std::vector <Base_Account*> accounts_vector;
    display(accounts_vector);
    std::cout << "======================================================" << std::endl;

    Checking_Account frank{ "Frank",5000 };
    std::cout << frank << std::endl;

    Base_Account* trust = new Trust_Account("James");
    std::cout << *trust << std::endl;

    Base_Account* p1 = new Checking_Account("Larry", 10000);
    Base_Account* p2 = new Savings_Account("Moe", 1000);
    Base_Account* p3 = new Trust_Account("Curly");

    std::vector <Base_Account*> accounts{p1, p2};
    accounts.push_back(p3);

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(accounts);

    delete p1;
    delete p2;
    delete p3;

    return 0;
}


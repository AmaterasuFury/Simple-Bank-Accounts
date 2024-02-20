#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Base_Account.h"

// Utility helper functions for Account class

void display(const std::vector<Base_Account*>& accounts);
void deposit(std::vector<Base_Account*>& accBase_Accountounts, double amount);
void withdraw(std::vector<Base_Account*>& Base_Account, double amount);


#endif
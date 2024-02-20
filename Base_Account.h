#pragma once
#include <iostream>
#include "I_Printable.h"

class Base_Account : public I_Printable {

public:
	virtual bool deposit(double amount) = 0;
	virtual bool withdraw(double amount) = 0;

	virtual void print(std::ostream& os)const override {
		os << "Base Account display";
	}

	virtual ~Base_Account() {};
};
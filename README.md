# 🏦 Polymorphic Bank Account Simulation in C++

This project demonstrates object-oriented programming principles in C++, specifically **inheritance**, **polymorphism**, **dynamic memory management**, and **runtime behavior via virtual functions**.

It simulates different types of bank accounts such as Checking, Savings, and Trust accounts, each with their own behavior for depositing, withdrawing, and displaying account details.

---

## 🧰 Features & Functionality

### ✅ Account Types

Each account class inherits from a common abstract base class `Base_Account` and overrides the relevant virtual functions:

- **`Savings_Account`** — standard interest-bearing account
- **`Checking_Account`** — supports withdrawals with transaction fees
- **`Trust_Account`** — applies bonus deposit rules and limited withdrawals

### 🧠 Key Concepts Demonstrated

- **Polymorphism**: `Base_Account*` pointers used to handle different account types.
- **Dynamic Memory**: Manual allocation (`new`) and deallocation (`delete`) of objects.
- **Virtual Functions**: Methods like `deposit()`, `withdraw()`, and `display()` are overridden in derived classes.
- **Vectors of Base Class Pointers**: Demonstrates working with collections of polymorphic objects.

---

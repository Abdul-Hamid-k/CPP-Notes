#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "Account.h"

//Savings Account is a type of Account
// Adds an interest rate
//Withdraw - Same as regular Account
//Deposit:
//  Amount supplied to deposite will be incremented by (amount * int_rate / 100)
//  and then update amount will be deposite

class Savings_Account{
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
private:
    static constexpr const char *def_name = "Unname Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    // inherit the account withdraw methord
};



#endif
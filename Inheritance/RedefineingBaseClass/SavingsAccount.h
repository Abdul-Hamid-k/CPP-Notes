#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "Account.h"

//Saving Account Class
// Deposite methord increments amount to be deposited by amount *int_rate percentage!!
// So a 1000 deposite at 5% interest ratee will deposite 1000 + 50 = 1050

// Withdraw methord does not specialized

class Saving_Account:public Account {
    friend std::ostream &operator<<(std::ostream &os, const Saving_Account &account);
protected:
    double int_rate;
public:
    Saving_Account();
    Saving_Account(double amount, double int_rate);
    void deposit(double amount);
};

#endif
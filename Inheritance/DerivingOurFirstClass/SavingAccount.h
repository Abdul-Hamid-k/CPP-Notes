#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "Account.h"

class SavingAccount: public Account{
public:
    double intr_rate;
    SavingAccount();
    ~SavingAccount();

    void withdraw(double amount);
    void deposit(double amount);
};

#endif

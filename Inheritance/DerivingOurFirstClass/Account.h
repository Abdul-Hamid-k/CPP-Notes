#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account{
public:
    double balance;
    std::string AccountName;
    Account();
    ~Account();

    void withdraw(double amount);
    void deposit(double amount);
};

#endif

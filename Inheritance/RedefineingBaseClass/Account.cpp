#include <iostream>
#include "Account.h"

Account::Account()
    :Account {0.00}{    //delegated constructor
}

Account::Account(double amount)
    :balance {amount}{
}

void Account::deposit(double amount){
    balance += amount;    
}

void Account::withdra(double amount){
    if(balance-amount > 0){
        balance -= amount;
    }
    else{
        std::cout<<"Insufficient Balance"<<std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os << "Account Balance: "<<account.balance;
    return os;
}
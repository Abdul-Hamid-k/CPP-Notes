#include "SavingsAccount.h"

Saving_Account::Saving_Account(double amount, double int_rate)
    :Account(amount), int_rate{int_rate} {
} 

Saving_Account::Saving_Account()
    :Saving_Account{0.0, 0.0} {
}

void Saving_Account::deposit(double amount){
    amount = amount + (amount * int_rate);
    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Saving_Account &account){
    os << "Saving Account Balance" << account.balance << "Interest Rate" <<account.int_rate;
} 
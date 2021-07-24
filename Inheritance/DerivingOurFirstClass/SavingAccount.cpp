#include <iostream>
#include "SavingAccount.h"

SavingAccount::SavingAccount(): intr_rate {3.0}{
    std::cout<<"Saving Account const is called"<<std::endl;
}

SavingAccount::~SavingAccount(){
    std::cout<<"Saving Account dst is called"<<std::endl;
}

void SavingAccount::deposit(double amount){
    std::cout<<"Saving Account deposit called with "<< amount <<std::endl;
}

void SavingAccount::withdraw(double amount){
    std::cout<<"Saving Account withdraw called with "<< amount <<std::endl;
}
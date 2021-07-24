#include <iostream>
#include "Account.h"

Account::Account():balance {0.0}, AccountName {"Name"} {
    std::cout<<"Account const is called"<<std::endl;
}

Account::~Account(){
    std::cout<<"Account dstrtr is called"<<std::endl;
}

void Account::deposit(double amount){
    balance = balance + amount;
    std::cout<<"Account deposit called with "<< amount <<std::endl;
}

void Account::withdraw(double amount){
    if(amount>balance){
        std::cout<<"Insufficient Balance"<<std::endl;
    }
    else if(balance > amount){
        balance = balance - amount;
    }
    std::cout<<"Account withdraw called with "<< amount <<std::endl;
}
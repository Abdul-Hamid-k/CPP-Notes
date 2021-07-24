#include "Account.hpp"
#include <iostream>

void Account::set_name(string n){ 
    name = n;
    }
string Account::get_name(){
    return name;
    }

bool Account::withdraw(double bal){
    if (balance - bal >= 0){ 
        balance -= bal;
        cout<<"Withdrawling..."<<endl;
        cout<<"Balance: "<<balance<<endl;
        return true;
        }
    else{
        cout<<"Insufficient Balance..."<<endl;
        return false;
        }
    }
bool Account::deposit(double bal){
    balance += bal;
    cout<<"Depositing..."<<endl;
    cout<<"Balance: "<<balance<<endl;
    return true;
    }
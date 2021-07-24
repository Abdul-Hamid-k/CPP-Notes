// Section 13
//Implirenting Member Methord

#include <iostream>
#include <string>
#include "Account.hpp"

using namespace std;

int main(){
    Account Frank_Account;
    Frank_Account.set_name("Abdul");
    Frank_Account.set_balance(1000);
    cout<<Frank_Account.get_name()<<endl;;
    cout<<Frank_Account.get_balance()<<endl;
    Frank_Account.withdraw(200);
    Frank_Account.withdraw(500);
    Frank_Account.deposit(300);
    Frank_Account.deposit(200);
    Frank_Account.withdraw(500);
}
#include <iostream>
#include "Account.h"
#include "SavingAccount.h"

using std::cout;
using std::endl;

int main(){
    // Use the Account Class
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);
    cout<<endl;

    Account *p_acc {nullptr};
    p_acc = new Account;
    p_acc->deposit(1000);
    p_acc->withdraw(500);
    delete p_acc;

    // Using Saving Account Class
    SavingAccount sav_acc{};
    sav_acc.deposit(2000.0);
    sav_acc.deposit(700.0);

    cout<<endl;

    SavingAccount *p_sav_acc {nullptr};
    p_sav_acc = new SavingAccount;
    p_sav_acc->deposit(3000.0);
    p_sav_acc->withdraw(1800.0);
    delete p_sav_acc;

    return 0;

}
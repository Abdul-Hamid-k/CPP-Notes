#include <iostream>
#include "SavingsAccount.h"

using namespace std;

int main(){
    cout<<"========== Account Class =========="<<endl;
    Account a1{1000};
    cout<<a1<<endl;

    a1.deposit(500.0);
    cout<<a1<<endl;

    a1.withdra(1000.0);
    cout<<a1<<endl;

    a1.withdra(5000.0);
    cout<<a1<<endl;

    cout<<"========== Saving Account Class =========="<<endl;
    Saving_Account s1 {1000.0, 5.0};
    cout<<s1<<endl;

    s1.deposit(1000.0);
    cout<<s1<<endl;

    s1.withdra(500.0);
    cout<<s1<<endl;

    s1.withdra(2000.0);
    cout<<s1<<endl;
}
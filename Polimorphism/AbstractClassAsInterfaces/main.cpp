#include <iostream>
#include "Accounts.cpp"

using namespace std;


int main(){

    // Account a;
    // cout<<a<<endl;

    // Checking c;
    // cout<<c<<endl;

    // Saving s;
    // cout<<s<<endl;

    // Trust t;
    // cout<<t<<endl;

    Account *ptr = new Account();
    cout<<*ptr<<endl;

    Account *ptr1 = new Checking();
    cout<<*ptr1<<endl;


    return 0;
}
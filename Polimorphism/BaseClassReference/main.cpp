#include<iostream>

using namespace std;

class Account{
public:
    virtual void withdraw(double amount){
        cout<<"Account::Withdraw"<<endl;
    }
    virtual ~Account();
};

class Saving: public Account{
public:
    virtual void withdraw(double amount){
        cout<<"Saving::Withdraw"<<endl;
    }
    virtual ~Saving();
};

class Checking: public Account{
public:
    virtual void withdraw(double amount){
        cout<<"Checking::Withdraw"<<endl;
    }
    virtual ~Checking();
};

class Trust: public Account{
public:
    virtual void withdraw(double amount){
        cout<<"Trust::Withdraw"<<endl;
    }
    virtual ~Trust();
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main(){
    Account a;
    Account &ref = a;
    ref.withdraw(1000);

    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);

    Account a1;
    Saving a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1, 1000);
    do_withdraw(a2, 1000);
    do_withdraw(a3, 1000);
    do_withdraw(a4, 1000);

    return 0;
}
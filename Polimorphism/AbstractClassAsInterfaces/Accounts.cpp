#include <iostream>

using namespace std;

class I_printable{
    friend ostream &operator<<(ostream &os, const I_printable &obj);
public:
    virtual void print(ostream &os) const = 0;
};

ostream &operator<<(ostream &os, const I_printable &obj){
    obj.print(os);
    return os;
}

class Account: public I_printable{
public:
    virtual void withdraw(double amount){
        cout<<"In Account::Withdrawl"<<endl;
    }
    virtual void print(ostream &os) const{
        os << "Account Display";
    }
    virtual ~Account() {}
};

class Checking: public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In checking::Withdraw"<<endl;
    }
    virtual void print(ostream &os) const{
        os << "Checking Display";
    }
    virtual ~Checking() {}
};

class Saving: public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Saving::Withdraw"<<endl;
    }
    virtual void print(ostream &os) const{
        os << "Saving Display";
    }
    virtual ~Saving() {}
};

class Trust{
public:
    virtual void withdraw(double amount){
        cout<<"In Trust::Withdraw"<<endl;
    }
    virtual void print(ostream &os) const{
        os << "Trust Display";
    }
    virtual ~Trust() {}
};


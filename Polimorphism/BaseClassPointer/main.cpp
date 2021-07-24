#include<iostream>
#include<vector>

using namespace std;

class Account{
public:
    // For dinamic binding we need to make the function virtual, if we dont make the function virtual it will do static binding.
    // lets take a example Base and Derived are 2 class Derived inherit the Base, if I create a object on heap eg. Base *ptr = new Derived
    // it will point out the base becouse ptr is object of Base but created as Derived. 
    // In simple words, Base *ptr = new Derived, will be object of-
    // 1.Base staticly, by default.
    // 2.Derived Dinemically, If virtual function is used.
    virtual void withdraw(double amount){       
        cout<<"In Account::Withdraw"<<endl;
    }
};

class Saving:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Saving::Withdraw"<<endl;
    }
};

class Checking:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Checking::Withdraw"<<endl;
    }
};

class Trust:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"In Trust::Withdraw"<<endl;
    }
};

int main(){
    cout<<"========== Pointer =========="<<endl;
    Account *p1 = new Account ();
    Account *p2 = new Saving ();
    Account *p3 = new Checking ();
    Account *p4 = new Trust ();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    cout<<"========== Array =========="<<endl;
    Account *array[] = {p1,p2,p3,p4};
    for (auto i = 0; i < 4; i++){
        array[i]->withdraw(1000);
    }

    cout<<"========== Array =========="<<endl;
    array[0] = p4; 
    for (auto i = 0; i < 4; i++){
        array[i]->withdraw(1000);
    }

    cout<<"========== Vector =========="<<endl;
    vector<Account *> accounts {p1,p2,p3,p4};
    for(auto acc_ptr: accounts){
        acc_ptr->withdraw(1000);
    }

    cout<<"========== Vector =========="<<endl;
    accounts.push_back(p4);
    accounts.push_back(p4);
    for(auto acc_ptr: accounts){
        acc_ptr->withdraw(1000);
    }

    cout<<"========== Clean up =========="<<endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}
//SECTION 13
//
// 6 JUNE 2020

#include<iostream>
#include<string>

using namespace std;

class Account{
private:
    string name;
    double balance;
public:
    void set_name(string n);
    string get_name();

    void set_balance(double bal);
    double get_balance();

    void withdraw(double withdraw_amount);
    void deposit(double deposite_amount);
};

void Account::set_name(string n){
    name = n;
}
string Account::get_name(){
    return name;
}

void Account::set_balance(double bal){
    balance = bal;
}
double Account::get_balance(){
    return balance;
}

void Account::withdraw(double withdraw_amount){
    if (balance>=withdraw_amount){
        cout<<"Withdraw ok"<<endl;
        double bal = bal - withdraw_amount;
        cout<<"Balance: "<<balance<<endl;
    }
    else{
        cout<<"Insufficient balance..."<<endl;
    }

}

int main(){
    Account frank_account;
    frank_account.set_name("frank_account");
    frank_account.get_name();
    frank_account.set_balance(10000);
    frank_account.get_balance();
}

#ifndef _Account_H_
#define _Account_H_
#include <string>

using namespace std;


class Account{
    //atribute
private:
    string name;
    double balance;
    
public:
    //methord
    //declaired inline
    void set_balance(double bal){ balance = bal;}
    double get_balance(){return balance;}
    
    //methord will be declaired outside the class declairation
    void set_name(string n);
    string get_name();
    
    bool withdraw(double bal);
    bool deposit(double bal);
    //We can use private objects in the public...
};

#endif // _Account_H_

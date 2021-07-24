// Section 13
//Accessing Class Member

#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    //attribute
    string name{"Player"};
    int health;
    int xp;
    
    //methord
    void talk(string says){cout<<name<<" says: "<<says<<endl;};
    bool is_dead();
};

class Account {
public:
    //attribute
    string name {"Account"};
    double balance;
    
    //methord
    bool withdraw(double bal){
        return balance -= bal;
        }
    bool deposit(double bal){
        return balance += bal;
        
        }
};

void money_transection(Account account_name){
    double action_amt;
    while(true){
        cout<<"enter 'd' for deposite and 'w' for withdraw: ";
        char action;
        cin>>action;
        if (action == 'd'){
            cout<<"How much amount you want to deposit: ";
            cin>>action_amt;
            account_name.deposit(action_amt);
        }
        else if(action == 'w'){
            cout<<"How much amount you want to withdraw: ";
            cin>>action_amt;
            account_name.withdraw(action_amt);
        }
        else if(action == 'o'){
            cout<<"Come Again..."<<endl;
            break;
        }
        else{
            cout<<"Invalid input"<<endl;
        }
        
    }
}

int main(){
    Player frank;
    frank.name = "Frank";
    frank.talk("Hi there");
    
    Player *enemy;
    enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will kill you");
    delete enemy;
    
    Account James_account;
    cout<<"Enter the name of Account You want: ";
    string Account_name;
    cin>>Account_name;
    James_account.name = "James";
    cout<<"With how much amount you want to start your account: ";
    double start_balance;
    cin>>start_balance;
    James_account.balance = start_balance;
    
    
    money_transection(James_account);
}
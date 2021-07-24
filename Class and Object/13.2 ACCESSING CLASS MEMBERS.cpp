//ACCESSING CLASS MEMBERS
//4 JUNE 2020

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class player{
public:
    //atribute
    string name;                //you can see how they are performing by debugging the code.
    int health;                 //classes are like variables we create them for change the work flow as we please, In oop's consept.
    int xp;

    //methord
    void talk(string text_to_say){cout<<name<<" says "<< text_to_say<<endl;};    //This is one way of implimenting the text out cast.
    bool is_dead();

};

class account{
public:
    //atribute
    string name;
    double balance;

    //methord
    bool withdraw(double bal){balance -= bal; cout<<"Balance: "<<balance+bal<<"\nIn withdraw: "<<bal<<"\n"<<"Current Balance: "<<balance<<"\n"<<endl;};
    bool deposite(double bal){balance += bal; cout<<"Balance: "<<balance-bal<<"\nIn deposite: "<<bal<<"\n"<<"Current Balance: "<<balance<<"\n"<<endl;};

};

int main(){
    player frank;
    frank.name = "Frank";               //Here we are using the . operator to access the class functions which is defined in the class eg. name, health, xp.
    frank.health = 100;                 //All this things work in memory so we can't see this in the compilor instead we can use debugger to see what is
    frank.xp = 12;                      //going on.
    frank.talk("Hi there");

    player *enemy = new player;     //Whenever you use pointer in the class function you must define it into new bcos after the work pointer should be remove
    (*enemy).name = "Enemy";        //from the storage after the run in run time from the heap.
    (*enemy).health = 100;          //In case of . operator we must use prethesis to seperate them bcos '.' is priority over the '*' but we need to dereferance first.
    enemy->xp = 15;                 //Here we are using the arrow opperator in which we don't need to use prenthesis and dereferance the pointer.
    enemy->talk("I will kill you...\n");

    account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 10000;
    frank_account.deposite(1000);
    frank_account.withdraw(230.45);



}

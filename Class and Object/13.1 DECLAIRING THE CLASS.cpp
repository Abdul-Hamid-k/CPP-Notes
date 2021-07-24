//DECLAIRING THE CLASS
//4 JUNE 2020

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class player{
    //atribute
    string name;                //you can see how they are performing by debugging the code.
    int health;                 //classes are like variables we create them for change the work flow as we please, In oop's consept.
    int xp;

    //methord
    void talk(string text_to_say );
    bool is_dead();

};

class account{
    //atribute
    string name;
    double balance;

    //methord
    bool withdraw();
    bool deposite();

};

int main(){
    player frank;
    player james;

    account frank_account;
    account james_account;

    player players[] {frank, james};

    vector<player> player_vect{frank};
    player_vect.push_back(james);

}

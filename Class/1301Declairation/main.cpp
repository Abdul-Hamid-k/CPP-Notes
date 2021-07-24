//Declair class and object

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    //atribute
public:
    string name;
    int health;
    int xp;
        
    //methord
    void talk(string);
    bool is_dead();
};

class Account{
    //attribute
    string name {"Account"};
    double balance;
    
    //methord
    bool withdraw();
    bool deposit();
};
    
int main(){
    Account frank_account;
    Account jim_account;
    
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    
    Player hero;
    
    Player players[] {frank, hero};     //we can use array as well as vectos in class...

    vector <Player> players1{frank};
    players1.push_back(hero);
    
    Player *enemy{nullptr};     //creating player on the heap and delete it...
    enemy = new Player;
    
    delete enemy;
    
}

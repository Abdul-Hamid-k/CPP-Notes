//Section 13
//Overloading Constructors


#include <iostream>
#include <string>

using namespace std;
    
class Player{
private:
    //atribute
    string name;
    int health;
    int xp;

public:    
    //methord
Player::Player(){
    name = "None";
    health = 0;
    xp = 0;
    }
Player::Player(string name_val){
    name = name_val;
    health = 0;
    xp = 0;
    }
Player::Player(string name_val, int health_val){
    name = name_val;
    health = health_val;
    xp = 0;
    }
Player::Player(string name_val, int health_val, int xp_val){
    name = name_val;
    health = health_val;
    xp = xp_val;
    }
};

int main(){
    Player("frank");
    Player("James", 120);
    Player("Arc", 125, 13);
    Player("Hamid");
}
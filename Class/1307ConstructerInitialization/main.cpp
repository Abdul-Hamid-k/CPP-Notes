//Section 13
//Constructors Initialisation


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
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

    //This will work same as the overloading constructer, But it is more effective way...
    //Order in the overlisting doesnt matter it will be assign as we assign in private...
Player::Player()
    : name{"None"}, health{0}, xp{0}{
    }
Player::Player(string name_val)
    : name{name_val}, health{0}, xp{0}{
    }
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
    }
    
int main(){
    Player empty;
    Player frank("Frank");
    Player villain("Villain", 100, 23);
}
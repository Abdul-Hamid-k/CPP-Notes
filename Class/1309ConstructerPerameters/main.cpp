//Section 13
//Constructors Perameter


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
    Player(string name_val ="None", int health_val = 0, int xp_val = 0);
    //we are declairing the default perameters so if we have input arguments then they will execute if not then our default perameter will execute...
    //input values over-right the default value...
};

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout<<"Three arg constructer call"<<endl;
    }

    
int main(){
    Player enemy;
    Player frank("Frank");
    Player drub("drub", 100);
    Player hero("Arc", 100, 2);
}
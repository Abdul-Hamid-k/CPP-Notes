#include<iostream>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    std::string get_name() const {
        return name;
    }
    void set_name(string n){
        name = n;
    }
    
    Player();
    Player(string name_val);
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
    
    ~Player();
};

Player::Player(){
    name = "None";
    int health = 0;
    int xp = 0;
}

Player::Player(string name_val){
    name = name_val;
    int health = 0;
    int xp = 0;
}

Player::Player(string name_val, int health_val, int xp_val):
    name {name_val}, health {health_val}, xp {xp_val}{
    }
    
void display_name(const Player &p){
    cout<<p.get_name()<<endl;
}
    
int main(){
    const Player Villain ("Villain", 100, 0);
    Player hero("Hero", 10,5);
    display_name(Villain);
    display_name(hero);
}

// When you use constant objects you can only use costant methords.
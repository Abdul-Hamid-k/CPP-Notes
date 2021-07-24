//Section 13
//Shallow copy Constructors 


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
    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    
    Player(string name_val ="None", int health_val = 0, int xp_val = 0);
    //we are declairing the default perameters so if we have input arguments then they will execute if not then our default perameter will execute...
    //input values over-right the default value...
    Player(const Player &sourse);
    ~Player(){cout<<"Destructer is called for:"<<name<<endl;}
};

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout<<"constructer call for: "<<name<<endl;
    }

Player::Player(const Player &sourse)
    :name{sourse.name}, health{sourse.health}, xp{sourse.xp}{
        cout<<"Copy constructer is called for "<<sourse.name<<endl;
    }

void display_player(Player p){
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"Xp: "<<p.get_xp()<<endl;
}
    
int main(){
    Player enemy;
    Player frank("Frank");
    
    display_player(frank);
    
    Player drub("drub", 100);
    
    Player my_new_object(drub);
    
    Player hero("Arc", 100, 2);
}
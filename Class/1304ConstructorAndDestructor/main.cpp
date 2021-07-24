//Section 13
//Constructer and Destructor

#include <iostream>

using namespace std;

    //Constructer and destructer have same name as the class there may be one or more than one having spacifc arguments...
    //Destructers are used to free up the space and close up the files, There is only one distructer per class...
    //Destructer have no perameter and no any data type...
    //Destructer are specify as "~class_name"...
    
class Player{
private:
    //atribute
    string name;
    int health;
    int xp;

public:    
    //methord
    void set_name(string n){name = n;}
    
    //overloading Constructer
    Player(){
        cout<<"No argument is called"<<endl;
    }
    Player(string name){
        cout<<"String arg constructer called"<<endl;
    }
    Player(string name, int health, int xp){
        cout<<"Three arg is called"<<endl;
    }
    ~Player(){
        cout<<"Destructer called for "<<name<<endl;
    }
};


int main(){
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero;
        hero.set_name("Hero");
        Player Villain;
        Villain.set_name("Villain");
    }
    
    Player *enemy = new Player;
    enemy->set_name("Enemy");
    
    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");
    
    delete enemy;
    delete level_boss;
}
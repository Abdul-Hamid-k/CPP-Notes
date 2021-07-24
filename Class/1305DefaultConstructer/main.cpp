//Section 13
//Default Constructer

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
    void set_name(string n){
        name = n;
    }
    string get_name(){
        return name;
    }
    //Default consructors have no attributes and applied to the whole class objects that are formed in the class...
    Player(){
        name = "None";
        health = 100;
        xp = 15;
    }
    
    //If I create a constructer having arguments then it will not allow us to create the class object with no argument... 
    //eg. "Player.frank;" 
    //But if I define the default constuctor to implement the values and the after words I can modefy as I wish to...
    Player(string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
};    
    
int main(){
    Player frank;   //declairing with defaut constructer
    frank.set_name("Frank"); //modifing the default constructer
    cout<<frank.get_name()<<endl;
    Player Enemy("Enemy", 300, 32); //declairing the 3 arg constructer
}
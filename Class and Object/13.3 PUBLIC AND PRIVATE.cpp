//PUBLIC AND PRIVATE

#include<iostream>

using namespace std;

class Player{
private:
    //attribue
    string name{"frank"};
    double health;
    double xp;

public:
    //methord
    void talk(string text_to_say){cout<<name<<": "<<text_to_say<<endl;}
    bool is_dead{};
};

int main(){
    Player frank;                 //frank is an variable assigning in the class function Player.
    //Player.name = frank;        //Give us error as it is private cant be change from outside
    //Player.xp = 12;

    frank.talk("I will kill you...");   //frank which is variable of class function acessing the talk class through '.'
    return 0;
}

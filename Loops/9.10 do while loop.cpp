//5 may 2020

#include<iostream>
using namespace std;
int main(){
    char selection {};

    do{
    cout<<"\n-----------------------------"<<endl;
    cout<<"1-Do this"<<endl;
    cout<<"2-Do that"<<endl;
    cout<<"3-Do something else"<<endl;
    cout<<"Q-Quit"<<endl;
    cout<<"\nEnter your selection : ";
    cin>>selection;

            if ( selection == '1')
                cout<<"You chose-1: Do this"<<endl;
            else if ( selection == '2')
              cout<<"You chose-2: Do that"<<endl;
            else if ( selection == '3')
                cout<<"You chose-3: Do something else"<<endl;
            else if ( selection == 'q' || selection == 'Q' )
                cout<<"see you soon..."<<endl;
            else
                cout<<"Invalid option -- try again..."<<endl;


    }while( selection != 'q' && selection != 'Q');

}

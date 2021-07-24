//SECTION 10
//7 MAY 2020
//C STYLE STRING

#include <iostream>
#include <cstring>      //for C-Style string
#include <cctype>       //for character based function

using namespace std;

int main(){
    char first_name [20] {};
    char last_name [20] {};
    char full_name [50] {};
    char temp [50] {};

    //cout<<first_name;       //first_name is not initialised so most likely we get garbage value.

    //cout<<"Enter your first name :";
    //cin>>first_name;

    //cout<<"Enter your last name :";
    //cin>>last_name;
    //cout<<"------------------------------------------------"<<endl;

    //cout<<"Hello "<<first_name<<", your first name have "<<strlen(first_name)<<" chaacters"<<endl;
    //cout<<"Your last name "<<last_name<<" have "<<strlen(last_name)<<" characters"<<endl;   //strlen string length
    //cout<<"------------------------------------------------"<<endl;

    //strcpy(full_name, first_name);           //copy first name into full name.  //string copy
    //strcat(full_name, " ");                  //concatenate white space into full name. //string  concatenate
    //strcat(full_name, last_name);            //concatenate last name into full name.   //string  concatenate

    //cout<<"Your full name is "<<full_name<<endl;
    //cout<<"------------------------------------------------"<<endl;

    cout<<"Enter your full name :";
    //cin>>full_name;               //string read first name but when we provide space it breakes and terminate.

    cin.getline(full_name, 50);     //when we use getline function it takes the whole line as an input.

    cout<<"Your full name is :"<<full_name<<endl;
    cout<<"------------------------------------------------"<<endl;

    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)
        cout<<temp<<" and "<<full_name<<" are same"<<endl;
    else
        cout<<temp<<" and "<<full_name<<" are not same"<<endl;
    cout<<"------------------------------------------------"<<endl;

    return 0;
}

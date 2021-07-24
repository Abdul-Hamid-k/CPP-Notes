#include<iostream>
#include "Mystring.h"

using namespace std;

int main(){
    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring curly;

    cout<<"\nEnter the third stooge's first name: ";
    cin>>curly;

    cout<<"\nEnter the three stooges name seperated by a space: ";
    cin>>larry>>moe>>curly;

    cout<<"The three stooges are " << larry << ", " << moe << ", " << ", " << curly; 
    return 0;
}
//SECTION 11.1
//11 MAY 2020
//MATH FUNCTIONS

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double num{};
    cout<<"Enter the number (double) : ";
    cin>>num;

    cout<<"\nThe square root of the "<<num<<" is "<<sqrt(num)<<endl;
    cout<<"The cube root of the "<<num<<" is "<<cbrt(num)<<endl;

    cout<<"\nThe sine of the "<<num<<" is "<<sin(num)<<endl;
    cout<<"The cosine of the "<<num<<" is "<<cos(num)<<endl;

    cout<<"\nEnter the number you want to be the power of "<<num<<" :";
    double power{};
    cin>>power;

    cout<<"The value of "<<num<<" ^ "<<power<<" :"<<pow(num, power)<<endl;

    cout<<"\nThe ceil of the "<<num<<" :"<<ceil(num)<<endl;     //convert into upper round number
    cout<<"The floor of the "<<num<<" :"<<floor(num)<<endl;     //convert into lower round number
    cout<<"The round of the "<<num<<" :"<<round(num)<<endl;     //round off the number

    return 0;;
}

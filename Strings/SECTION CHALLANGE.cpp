//TEST SECTION 10
//10 MAY 2020

#include<iostream>
#include<string>

using namespace std;

int main(){

    string alphabate{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_code {};

    cout<<"Enter your secret code : ";
    getline(cin, secret_code);

    string encrypted_code {};

    cout<<"\nENCRYPTING..."<<endl;

    for(char c : secret_code){
        size_t position = alphabate.find(c);

        if(position != string::npos){
            char new_char { key.at(position) };
            encrypted_code += new_char;
        }
        else{
            encrypted_code += c;
        }
    }
    cout<<"Encrypted code : "<<encrypted_code<<endl;

    cout<<"\nDECRYPTING..."<<endl;

    string decripted_code {};

    for(char c: encrypted_code){
        size_t position = key.find(c);

        if(position != string::npos){
            size_t new_char = alphabate.at(position) ;
            decripted_code += new_char;
        }
        else{
            decripted_code += c;
        }
    }
     cout<<"Decripted code : "<<decripted_code<<endl;


     //THIS IS VERY CONFUSSING.........



}

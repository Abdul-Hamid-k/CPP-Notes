//SECTION 12
//DEREFERANCING THE POINTER
//31 MAY 2020

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
//EXP1
    int score{100};
    int *score_ptr{&score};

    cout<<*score_ptr<<endl;
    //"*score_ptr" after initialising with an address of a variable then it will show the value in score_ptr(value of score) and
    //"score_ptr" shows the address of the variable(score address).
    *score_ptr = 200;
    cout<<*score_ptr<<endl;
    cout<<score<<endl;

    cout<<"------------------------------"<<endl;
//EXP2
    double high_temp{100.7};
    double low_temp{37.8};
    double *temp_ptr{&high_temp};

    cout<<"\n"<<*temp_ptr<<endl;
    temp_ptr = &low_temp;
    cout<<*temp_ptr<<endl;

    cout<<"------------------------------"<<endl;
//EXP3
    string name{"frank"};
    string *string_ptr{&name};

    cout<<*string_ptr<<endl;
    name = "james";
    cout<<*string_ptr<<endl;

    cout<<"------------------------------"<<endl;
//EXP4
    vector<string> stooges {"larry", "moe", "currly"};
    vector<string> *stooges_ptr{&stooges};

    cout<<(*stooges_ptr).at(0)<<endl;
    for(auto stooge: *stooges_ptr){
        cout<<stooge<<" ";
    }
    cout<<endl;
}

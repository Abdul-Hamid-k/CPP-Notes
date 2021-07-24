//section 10
//9 MAY 2020
//C++ STYLE STRING

#include <iostream>
#include <string>

using namespace std;

int main(){

    string s0 ;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"kiwi"};
    string s4 {"apple"};
    string s5 {s1};     //Apple
    string s6 {s1, 0, 3};    //App
    string s7 (10,'X');    //XXXXXXXXXX

    //cout<<s0<<endl;         //No garbage value
    //cout<<s0.length()<<endl;//0

    //INITIALISATION
    cout<<"\nINITIALISATION \n--------------------------------"<<endl;
    cout<<"s1 is initialised :"<<s1<<endl;
    cout<<"s2 is initialised :"<<s2<<endl;
    cout<<"s3 is initialised :"<<s3<<endl;
    cout<<"s4 is initialised :"<<s4<<endl;
    cout<<"s5 is initialised :"<<s5<<endl;
    cout<<"s6 is initialised :"<<s6<<endl;
    cout<<"s7 is initialised :"<<s7<<endl;


    //COMPARISION
    cout<<boolalpha;
    cout<<"\nCOMPARISION\n--------------------------------------"<<endl;
    cout<<s1<<" == "<<s1<<" :"<<(s1 == s1)<<endl;
    cout<<s1<<" == "<<s2<<" :"<<(s1 == s2)<<endl;
    cout<<s1<<" != "<<s2<<" :"<<(s1 != s2)<<endl;
    cout<<s3<<" == "<<s4<<" :"<<(s3 == s4)<<endl;
    cout<<s1<<" < "<<s2<<" :"<<(s1 < s2)<<endl;
    cout<<s1<<" == "<<s4<<" :"<<(s1 == s4)<<endl;
    cout<<s2<<" > "<<s1<<" :"<<(s2 > s1)<<endl;
    cout<<s1<<" == "<<"Apple"<<" :"<<(s1 == "Apple")<<endl;

    //ASSIGNATION
    cout<<"\nASSIGNMENT\n---------------------------------------"<<endl;
    s1 = "watermellon";
    cout<<"s1 is now :"<<s1<<endl;

    s2 = s1;
    cout<<"s2 is now :"<<s2<<endl;

    s3 = "frank";
    cout<<"s3 is now :"<<s3<<endl;  //frank
    s3[0] = 'c';
    cout<<"s3 change first letter to 'c' :"<<s3<<endl;  //crank
    s3.at(0) = 'p';
    cout<<"s3 change first letter to 'p' :"<<s3<<endl;  //prank

    //CANCATNATION
    cout<<"\nCANCATNATION\n---------------------------------------"<<endl;
    s3 = s1 + " and " + s4 + " juice";
    cout<<"s3 is now :"<<s3<<endl;          //we can use one c style string and one c++ string side wise but not two c style string.

    //LOOPING
    cout<<"\nLOOPING\n--------------------------------------------"<<endl;
    for(size_t i {0}; i<s1.length(); ++i)
        { cout<<s1.at(i); }
    cout<<endl;
    for(auto c : s1)
        cout<<c;
    cout<<endl;

    //SUBSTRING
    cout<<"\nSUBSTRING\n--------------------------------------------"<<endl;
    string s8 {"This is a test"};

    cout<<s8.substr(0,4)<<endl;
    cout<<s8.substr(5,2)<<endl;
    cout<<s8.substr(8,12)<<endl;

    ////rest is in rough page


    cout<<endl;

}

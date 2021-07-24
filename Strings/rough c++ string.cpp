#include<iostream>
#include<string>

using namespace std;

int main(){
    //string first_name {};
    //string last_name {} ;

    //cout<<"Enter your first name :";
    //getline(cin, first_name);
    //cout<<"Enter your last name :";
    //cin>>last_name;

    //string full_name = first_name +" "+ last_name;
    //cout<<"Your full name is :"<<full_name<<endl;
    cout<<"----------------------------------"<<endl;

    //string s1 {};
    //string s2 {"Abdul"};
    //string s3 {s2};
    //string s4 {s2,0, 3};
    //string s5 {s2, 2, 3};
    //string s6 {s1};

    //cout<<s1<<endl;
    //cout<<s2<<endl;
    //cout<<s3<<endl;
    //cout<<s4<<endl;
    //cout<<s5<<endl;
    //cout<<s6<<endl;
    cout<<"----------------------------------"<<endl;

    string ss1 {"This is a problem"};

    cout<<ss1.at(3)<<endl;
    cout<<ss1.find('e')<<endl;
    cout<<ss1.find("This")<<endl;
    cout<<ss1.length()<<endl;
    cout<<ss1.erase(0,5)<<endl;
    cout<<ss1.length()<<endl;
    cout<<ss1<<endl;

    cout<<"----------------------------------"<<endl;




}

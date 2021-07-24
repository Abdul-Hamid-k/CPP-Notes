#include <iostream>

using namespace std;

class Base{
private:
    int value;
public:
    Base(): value{0} {cout<< "Base No-Arg Constructor"<<endl;}
    Base(int x): value{x} {cout<<"Base int Arg constructor"<<endl;}     // Non-special cnstructor
    ~Base(){cout<<"Base Destructor"<<endl;}
};

class Derived: public Base{ 
    using Base::Base;       // This allow us to use non-special constructors of the base class.
private:
    int double_value;
public:
    Derived():Base{}, double_value{0} {cout<<"Derived No-Arg Constructor"<<endl;}
    Derived(int x):Base{x}, double_value(x*2) {cout<<"Derived int Arg Constructor"<<endl;}
    ~Derived(){cout<<"Derived Destructor"<<endl;}
};

int main(){
    //Derived d;
    Derived d{50};
    
    return 0;
}
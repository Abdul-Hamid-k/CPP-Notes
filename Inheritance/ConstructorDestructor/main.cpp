// when we call derive class constructor the base class constructor call first then derived class constructor
// Base base();             // O/P -> Base const

// Derived derived();       // O/P -> Base const    
                            // O/P -> Derived const

// Destructor call will be just opposite to the constructor call.

#include<iostream>

using namespace std;

class Base{
private:
    int value;
public:
    Base(): value{0} {cout<< "Base No-Arg Constructor"<<endl;}
    Base(int val): value{val} {cout<<"Base int Arg constructor"<<endl;}     // Non-special cnstructor
    ~Base(){cout<<"Base Destructor"<<endl;}
};

class Derived: public Base{ 
    using Base::Base;       // This allow us to use non-special constructors of the base class.
private:
    int double_value;
public:
    Derived(): double_value{0} {cout<<"Derived No-Arg Constructor"<<endl;}
    //Derived(int x): double_value(x*2) {cout<<"Derived int Arg Constructor"<<endl;}
    ~Derived(){cout<<"Derived Destructor"<<endl;}
};

int main(){
    //Base b;
    //Base bb{100};

    //Derived d;      // If the const is not available for the derived class then the default const for derived class is no arg const of base class. 
    Derived dd{50}; // If the const is not available for the derived class then it will give error as constructors, destructors and overloading operators not inherit.
    return 0;
}
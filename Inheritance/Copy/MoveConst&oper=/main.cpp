#include<iostream>

using namespace std;

class Base{
private:
    int value;
public:
    Base(): value{0} {cout<< "Base No-Arg Constructor"<<endl;}
    Base(int val): value{val} {cout<<"Base int Arg constructor"<<endl;}     // Non-special cnstructor
    Base(const Base &source): value{source.value}{cout<<"Base Copy Const"<<endl;}
    Base &operator=(const Base &rhs){
        cout<<"Base Operator overloading"<<endl;
        if(this != &rhs){
            value = rhs.value;
        }
        return *this;
    }
    ~Base(){cout<<"Base Destructor"<<endl;}
};

class Derived: public Base{ 
    using Base::Base;       // This allow us to use non-special constructors of the base class.
private:
    int double_value;
public:
    Derived(): double_value{0} {cout<<"Derived No-Arg Constructor"<<endl;}
    Derived(int x): double_value(x*2) {cout<<"Derived int Arg Constructor"<<endl;}
    Derived(const Derived &source): Base{source}, double_value{source.double_value}{cout<<"Derived Copy Const"<<endl;}
    Derived &operator=(const Derived &rhs){
        cout<<"Base Operator overloading"<<endl;
        if(this != &rhs){
            double_value = rhs.double_value;
        }
        Base::operator=(rhs);
        return *this;
    }
    ~Derived(){cout<<"Derived Destructor"<<endl;}
};

int main(){
    // Base b{150};    //Overloading Const
    // Base b1{b};     //Copy Const
    // b = b1;         //Copy Assignment

    Derived d{100};
    Derived d1{d};
    d = d1;

    return 0;
}
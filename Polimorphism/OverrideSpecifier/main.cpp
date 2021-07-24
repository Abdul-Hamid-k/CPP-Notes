#include<iostream>

using namespace std;

class Base{
public:
    virtual void say_hello() const{     // 1
        cout<<"Hello - I am Base"<<endl;
    }
    virtual ~Base();
};

class Derived: public Base{
public:
    virtual void say_hello() const{     // 2
    //virtual void say_hello() override {
        cout<<"Hello - I am Derived"<<endl;
    }
    virtual ~Derived();
};

// Both 1 and 2 should be same othervise it will be reassigned( Static in nature ) not override( Dinamic in nature ) 
// or you can use override at the end of the function name to check it is overriding or not

int main(){
    Base *b = new Base;
    b->say_hello();
    Base *d = new Derived;
    d->say_hello();
}
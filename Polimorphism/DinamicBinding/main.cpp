#include <iostream>

class Base{
public:
    void say_hello() const{
        std::cout<<"Hello Everyone, Base"<<std::endl;
    }
};

class Derived: public Base{
public:
    void say_hello() const{
        std::cout<<"Hello Everyone, Derived"<<std::endl;
    }
};

void greatings(const Base &ba){
    std::cout<<"Greetings: ";
    ba.say_hello();
}

int main(){
    Base b;
    b.say_hello();
    Derived d;
    d.say_hello();
    greatings(b);
    greatings(d);

    Base *ptr = new Derived();    // ptr points to Derived, and Derived is-a Base, So its all fine by compiler
    ptr->say_hello();   // Base::say_hello
    return 0;
}
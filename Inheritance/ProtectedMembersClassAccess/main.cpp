#include <iostream>

using namespace std;

class Base{
    // Note friend of base class have access to all
public:
    int a {0};
    void display() {cout<< a << ", " << b << ", " << c << ", " <<endl;}

protected:
    int b{0};

private:
    int c{0};
};

class Derived: public Base{
    // Note friends of derived have access to only what Derived has access to

    // a will be public
    // b will be protected
    // c will not be accessible

public:
    void access_base_members(){
        a = 100;    //OK
        b = 200;    //OK
        //c = 300;    //not accessible 
    }

};

int main(){
    cout<<"===Base member access from base objects==="<<endl;
    Base base;
    base.a = 100;
    //base.b = 200;   // Compiler error
    //base.c = 300;   // Compiler error

    cout<<"===Base member access from derived objects==="<<endl;
    Derived dev;
    dev.a = 100;
    //dev.b = 200;    //not accessible / compiler error
    //dev.c = 200;    //not accessible / compiler error

    return 0;
}
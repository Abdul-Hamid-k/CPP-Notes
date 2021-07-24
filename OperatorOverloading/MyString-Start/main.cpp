#include<iostream>
#include <cstring>
#include <string>

using namespace std;

class Mystring{
private:
    Char *str;      // Pointer to a char that holds a C-Style String 
public:
    Mystring();                         // No arg Constructer
    Mystring(const char *s);            // Single arg Constructer
    Mystring(const Mystring &source);   // Copy Constructor
    ~Mystring();                        // Destructor

    void display() const;
    int getLength() const;
    const char *getStr() const;
};

int main(){
    Mystring enemy;
    Mystring larry("Larry");
    Mystring stooge(larry);

    enemy.display();
    larry.display();
    stooge.display();

}


// No Arg Constructor
Mystring::Mystring()
    :str{nullptr} {
        str = new char[1];
        *str = '\0';
}

// Overloading Constructors
Mystring::Mystring(const char *s)
    :str {nullptr}{
        if(s == nullptr) {
            str = new char[1];
            *str = '\0';
        }else {
            str = new char{ strlen(s) + 1 };
            std::strcpy(str, s);
        }
}

// Copy Constructor
Mystring(const Mystring &source) : str {nullptr} {
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str,source.str);
}

// Destructor
~Mystring(){
    delete []str;
}

// Display methord
void Mystring::display() const{
    cout<<str<<" : "<< getLength() <<endl;
}

// Length getter
int Mystring::getLength() const {
    return std::strlen(str);
}

// String getter
const char *Mystring::getStr() const{return str;}

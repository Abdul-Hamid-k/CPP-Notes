#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring()
    : str{nullptr}{
        str = new char[1];
        *str = '\0';
    }

Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s == nullptr){
            str = new char[1];
            *str = '\0';
        }
        else{
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }
    }

Mystring::Mystring(const Mystring &source)
    :str{nullptr} {
        str = new char[strlen(source.str) + 1];
        strcpy(str, source.str);
    }

Mystring::Mystring(Mystring &&source)
    :str{source.str} {
        source.str = nullptr;
        std::cout<<"Move Constructor"<<std::endl;
    }

Mystring::~Mystring(){
    delete [] this->str;
}

// Assignment operator overloading
// Move
Mystring &Mystring::operator=(Mystring &&rhs){
    if(this == &rhs){ return *this;}

    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Copy
Mystring &Mystring::operator=(const Mystring &rhs){
    if(this == &rhs){ return *this;}

    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);
    return *this;
}

// Comparision operator overloading
bool Mystring::operator==(cost Mystring &rhs) const{
    return (strcmp(str, rhs.str) == 0);
}

// Lowecase conversion by operatoroverloading
Mystring &Mystring::operator-() const{
    char *buff = new char[strlen(str) + 1];
    strcpy(buff, str);

    for(int i = 0; i<strlen(buff); i++){
        buff[i] = tolower(buff[i]);
    }
    Mystring temp(buff);
    delete []buff;
    return temp;
}

// Concatenation 
Mystring &Mystring::operator+(const Mystring &rhs) const{
    size_t buff_size = strlen(str) + strlen(rhs.str) + 1;
    char *buff = new char[buff_size];
    strcpy(buff, str);
    strcat(buff, rhs.str);
    Mystring temp (buff);
    delete []buff;
    return temp;
}

// Getters
void Mystring::display() const{
    std::cout<<str<<" : "<<get_length<<std::endl;
}

int Mystring::get_length() const{ return strlen(str); }

const char *Mystring::get_str() const{ return str; }
    

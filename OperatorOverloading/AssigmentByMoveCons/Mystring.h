#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);

    ~Mystring();

    Mystring &operator=(Mystring &&rhs);   // Move Assignment
    Mystring &operator=(const Mystring &rhs);   // Copy Assignment

    void display() const;
    int get_length() const;
    const char *get_str() const;
};


#endif
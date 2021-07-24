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

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    Mystring operator-() const;     //Make Lowercase
    Mystring operator+(const Mystring &rhs) const;    // Concatenation
    bool operator==(const Mystring &rhs) const; // CompareS

    void display() const;
    int get_length() const;
    const char *get_str() const;
};

#endif
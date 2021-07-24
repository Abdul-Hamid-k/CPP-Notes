#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main(){
    Mystring a {"Hello"};        // Overloading Constuctor
    Mystring b;                  // No-Args Constructor
    b = a;                        // Copy Assignment
                                 // b.operator=(a) 
    b = "This is a test!";       // b.operator={"This is a test!"}

    
    Mystring empty;
    Mystring larry("larry");
    Mystring stooge(larry);

    empty = stooge;

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}
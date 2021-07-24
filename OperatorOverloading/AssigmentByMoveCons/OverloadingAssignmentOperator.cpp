#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main(){
    Mystring a {"Hello"};        
    a = Mystring{"Jon"};                      
    a = "Bonjour";
    
    Mystring empty;
    Mystring larry("larry");
    Mystring stooge(larry);

    empty = stooge;

    empty.display();
    larry.display();
    stooge.display();

    return 0;
}
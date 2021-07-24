//SECTION 11.11
//15 MAY 2020
//FUNCTION CALL

#include<iostream>

using namespace std;

void func2(int &x, int y, int z){
    x += y + z;

}

int func1 (int a, int b){
    int result {};
    result = a+b;
    func2(result, a, b);
    return result;
}

int main(){             //Try to sort this code with all the previous section knowledge.
    int a {10};
    int b {20};
    int c {};

    c = func1(a, b);
    cout<<c<<endl;

}

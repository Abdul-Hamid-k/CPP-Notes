//12.3 DYNAMIC MEMORY ALLOCATION
//31 MAY 2020

#include<iostream>

using namespace std;

int main(){
    int *int_ptr{nullptr};
    int_ptr = new int;               //new is used to allocate the memory.
    cout<<int_ptr<<endl;
    delete int_ptr;                  //delete is used to deallocate the memory.

    size_t size{0};
    double *temp_ptr{nullptr};

    cout<<"How many temps?"<<endl;
    cin>>size;

    temp_ptr = new double[size];

    cout<<temp_ptr<<endl;

    delete [] temp_ptr;         //delete is used to frease up the location. Never declair pointer to null pointer in between new and delete.


}

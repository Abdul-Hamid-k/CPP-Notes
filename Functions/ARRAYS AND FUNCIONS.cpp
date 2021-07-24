//SECTION 11.7
//12 MAY 2020
//ARRAYS AND FUNCIONS

#include<iostream>

using namespace std;

void print_array( const int arr [], size_t size);           //we dont want to assign value in this funcion so we make it constant.
void set_array( int arr[], size_t size, int value);         //we create this function to assign value in the array so we dont need to make it constant.

int main(){
    int my_score [] {100, 98, 79, 96, 89};

    print_array(my_score, 5);
    set_array(my_score, 5, 100);
    print_array(my_score, 5);
}

void print_array( const int arr [], size_t size){
    for(size_t i {0}; i<size ; ++i){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

void set_array( int arr[], size_t size, int value){
    for(size_t i = 0; i<size; ++i){
        arr[i] = value;
    }
}

#include<iostream>
#include<memory>

using namespace std;

class Test{
private:
    int data;    
public:
    Test() : data(0) {std::cout<<"Test Constructor ( " << data << " )" <<std::endl;}
    Test(int data): data{data} {std::cout<<"Test Constructor ( " << data << " )" <<std::endl;}
    int get_data() {return data;}
    ~Test() {std::cout<<"Test Destructor ( "<< data << " )" <<std::endl;}
};

void deleter(Test *ptr){
    cout<<"using Custom function deleter"<<endl;
    delete ptr;
}

int main(){

    {
        // Using function
        shared_ptr<Test> ptr1 {new Test(100), deleter};
    }

    cout<<"========================================="<<endl;

    {
        // Using Lanbda
        shared_ptr<Test> ptr2 {new Test(200),
            [](Test *ptr) {
                cout<<"using Custom lambda deleter"<<endl;
                delete ptr;
            }};
    }

    return 0;
}
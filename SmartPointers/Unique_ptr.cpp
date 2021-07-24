#include <iostream>
#include <memory>
#include <vector>


class Test{
private:
    int data;    
public:
    Test() : data(0) {std::cout<<"Test Constructor ( " << data << " )" <<std::endl;}
    Test(int data): data{data} {std::cout<<"Test Constructor ( " << data << " )" <<std::endl;}
    int get_data() {return data;}
    ~Test() {std::cout<<"Test Destructor ( "<< data << " )" <<std::endl;}
};

using namespace std;

int main(){
    // Test *t = new Test(10000);
    // delete t;

    unique_ptr<Test> t1 = make_unique<Test>(20);
    unique_ptr<Test> t2 = make_unique<Test>(1000);
    // t2 = move(t1);
    // if (!t1)
    //     cout << "T2 is now null" <<endl;

    vector<unique_ptr<Test>> Tests;
    Tests.push_back(move(t1)); 
    Tests.push_back(move(t2));

    


    return 0;
}
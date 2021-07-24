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

void func(shared_ptr<Test> p){
    cout << "use_count: " << p.use_count() << endl;
}

int main(){
    //use_count - the number of shared_ptr objects
    //managing the heap objects

    // shared_ptr<int> p1 {new int {100}};
    // std::cout << *p1 << endl;    

    // shared_ptr<int> p2 {p1};
    // cout << "Use_count: " << p1.use_count() << endl;

    // p1.reset(); //p1 points to nowere, now it is null pointer

    // cout << "Use_count: " << p1.use_count() << endl;
    // cout << "Use_count: " << p2.use_count() << endl;

    cout << "========================================="<<endl;
    shared_ptr<Test> ptr = make_shared<Test>(100);
    func(ptr);
    cout << "use_count: " << ptr.use_count() << endl;
    {
        shared_ptr<Test> ptr1 = ptr;
        cout << "use_count: " << ptr1.use_count() << endl;
        {
            shared_ptr<Test> ptr2 = ptr;
            cout << "use_count: " << ptr2.use_count() << endl;
            ptr.reset();
        }
        cout << "use_count: " << ptr.use_count() << endl;
    }
    cout << "use_count: " << ptr.use_count() << endl;

    cout << "========================================="<<endl;

    return 0;
}
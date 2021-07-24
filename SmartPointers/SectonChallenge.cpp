#include<iostream>
#include<memory>
#include<vector>

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

// Functions prototype
unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>>&vec);

int main(){
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout<<"How many data pointers do you want to enter: ";
    int num;
    cin>>num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    return 0;
}

unique_ptr<vector<shared_ptr<Test>>> make() {
    return std::make_unique<std::vector<std::shared_ptr<Test>>> ();
}

void fill(vector<shared_ptr<Test>> &vec, int num){
    int temp;
    for(int i = 0; i<num; i++){
        cout<<"Enter the value "<<i+1<<": ";
        cin>>temp;
        shared_ptr<Test> ptr = make_shared<Test>(temp);
        vec.push_back(ptr);
    }
}

void display(const vector<shared_ptr<Test>>&vec){
    cout<<"\n============= Display ============="<<endl;
    for(const auto &ptr: vec){
        cout<<"\t\t "<< ptr->get_data() <<endl;
    }
    cout<<"======================================="<<endl;
}



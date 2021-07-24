//Section 13
//Shallow copy Constructors 


#include <iostream>
#include <string>

using namespace std;
    
class shallow{
private:
    //atribute
    int *data;

public:
    //methord
    void set_data_value(int d){*data = d;}
    int get_data_value(){return *data;}
    
    //constructer
    shallow(int d);
    
    //copy constructer
    shallow(const shallow &sourse);
    
    //destructer
    ~shallow();
};

shallow::shallow(int d){
        data = new int;
        *data = d;
    }

shallow::shallow(const shallow &sourse)
    :data{sourse.data}{
        cout<<"Copy constructer is called"<<endl;
    }
    
shallow::~shallow(){
    delete data;
    cout<<"Destructer freeing space"<<endl;
}

void display_shallow(shallow s){
    cout<<s.get_data_value()<<endl;
}
    //Shallow copy copy the path not the value when ones the destructer is called at that address then the address is no longer valid...
    
int main(){
    shallow obj1(100);
    display_shallow(obj1);
    
    shallow obj2 (obj1);
    obj2.set_data_value(1000);  //obj1 and obj2 points to the same address if we change the value of any one the value changes of the second one as well...
}
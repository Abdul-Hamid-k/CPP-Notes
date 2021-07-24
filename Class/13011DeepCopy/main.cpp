//Section 13
//Deep copy Constructors 


#include <iostream>
#include <string>

using namespace std;
    
class Deep{
private:
    //atribute
    int *data;

public:
    //methord
    void set_data_value(int d){*data = d;}
    int get_data_value(){return *data;}
    
    //constructer
    Deep(int d);
    
    //copy constructer
    Deep(const Deep &sourse);
    
    //destructer
    ~Deep();
};

Deep::Deep(int d){
        data = new int;
        *data = d;
    }

Deep::Deep(const Deep &sourse)      // '&' shows it is l-value
    : Deep {*sourse.data} {
       // data = new int;
        //*data = *sourse.data;
        cout<<"Copy constructer is called"<<endl;
    }
    //Deep copy creates new storage and copy values...
    //Deep copy work with the copy of value in the constructer so if we alter any variable which is the copy of the first variable then the changes will be independent...
    
Deep::~Deep(){
    delete data;
    cout<<"Destructer freeing space"<<endl;
}

void display_Deep(Deep s){
    cout<<s.get_data_value()<<endl;
}

    
int main(){
    Deep obj1(100);
    display_Deep(obj1);
    
    Deep obj2 (obj1);
    obj2.set_data_value(1000); 
}
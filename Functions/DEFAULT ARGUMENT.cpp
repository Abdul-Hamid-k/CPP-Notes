//SECTION 11.4
//12 MAY 2020
//DEFAULT ARGUMENT

#include <iostream>
#include<string>

using namespace std;

double calc_cost(double base_cost = 100.00, double tax_rate = 0.0620, double shipping = 312.720);
void greatings (string name, string prefix = "Mr.", string suffix = " ");

double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greatings (string name, string prefix, string suffix){
    cout<<"Hello "<<prefix + " " + name + " " + suffix<<endl;
}

int main(){
    cout<<"The cost for product1 is "<<calc_cost(100.0, 0.08, 420.0)<<endl;   //100 + 16 + 420
    cout<<"The cost for product2 is "<<calc_cost(100.0, 0.08)<<endl;          //Using default shipping
    cout<<"The cost for product3 is "<<calc_cost(200.0)<<endl;                //Using default tax and shipping
    cout<<"The cost for product1 is "<<calc_cost()<<endl;                     //using all default values

    cout<<endl;

    greatings("Abdul", "Dr.", "Hamid");
    greatings("James", "professor");        //using deffault suffix
    greatings("Frank");                     //using default prefix and suffix
    greatings("May", "Mrs", "Porter");
}

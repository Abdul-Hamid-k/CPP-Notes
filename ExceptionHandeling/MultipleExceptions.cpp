#include<iostream>

using namespace std;

double cal_mpg(int Kelometers, int Litre){
    if(Litre == 0)
        throw 0;
    if(Kelometers < 0 || Litre < 0)
        throw string{"Negative value Error"};
    return (static_cast<double>(Kelometers) / Litre);
}

int main(){
    int Kelometers {};
    int Litre {};
    double Kelometers_per_Litre {};

    cout<<"Enter Kelometers: ";
    cin>>Kelometers;

    cout<<"Enter Litre: ";
    cin>>Litre;

    try
    {
        Kelometers_per_Litre = cal_mpg(Kelometers, Litre);
        cout << "[KMPL]: " << Kelometers_per_Litre << endl;
    }
    catch(int &exp)
    {
        cout<<"Tried to divide by zero"<<endl;
    }
    catch(string &exp)
    {
        cout << exp << endl;
    }
    
}
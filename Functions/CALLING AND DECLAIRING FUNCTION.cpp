//SECTION 11.3
//11 MAY 2020
//CALLING AND DECLAIRING FUNCTION

#include<iostream>

using namespace std;
//AREA OF CIRCLE AND VOLUME OF CYLINDER

double pi {3.14};

double calc_area_circle(double radius){
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height){
    return pi * radius * radius * height;
}

void area_of_circle(){
    double radius{};
    cout<<"-----AREA OF CIRCLE-----"<<endl;
    cout<<"\nEnter the radius of the circle in cm: ";
    cin>>radius;
    cout<<"\nArea of the circle having radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;
}

void volume_of_cylinder(){
    double radius{}, height{};
    cout<<"\n\n-----VOLUME OF CYLINDER-----"<<endl;
    cout<<"\nEnter the radius of the cylinder in cm: ";
    cin>>radius;
    cout<<"\nEnter the height of the cylinder in cm: ";
    cin>>height;
    cout<<"\nVolume of the cylinder having radius "<<radius<<" and height "<<height<<" is "<<calc_volume_cylinder(radius, height)<<endl;

}

int main(){
    area_of_circle();
    volume_of_cylinder();
}

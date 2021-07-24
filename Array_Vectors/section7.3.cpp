#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> vector1 {};
    vector <int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"The first integer in vector1 is : "<<vector1.at(0)<<endl;
    cout<<"The second integer in vector1 is : "<<vector1.at(1)<<endl;
    cout<<"The size of vector1 is "<< vector1.size()<<endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout<<"\nThe first integer in vector2 is : "<<vector2.at(0)<<endl;
    cout<<"The second integer in vector2 is : "<<vector2.at(1)<<endl;
    cout<<"The size of vector2 is "<< vector2.size()<<endl;

    vector <vector <int>> vector_2D{};

    vector_2D.push_back(vector1);
    vector_2D.push_back(vector2);

    cout<<"\nThe value [0][0] is "<<vector_2D.at(0).at(0)<<endl;
    cout<<"The value [0][1] is "<<vector_2D.at(0).at(1)<<endl;
    cout<<"The value [1][0] is "<<vector_2D.at(1).at(0)<<endl;
    cout<<"The value [1][1] is "<<vector_2D.at(1).at(1)<<endl;
    cout<<"The size of vector_2D is "<< vector_2D.size()<<endl;
    //or
    cout<<"\n"<<vector_2D.at(0).at(0)<<"  "<<vector_2D.at(0).at(1)<<endl;
    cout<<vector_2D.at(1).at(0)<<"  "<<vector_2D.at(1).at(1)<<endl;


    vector1.at(0) = 1000;

    cout<<"\nThe value [0][0] is "<<vector_2D.at(0).at(0)<<endl;
    cout<<"The value [0][1] is "<<vector_2D.at(0).at(1)<<endl;
    cout<<"The value [1][0] is "<<vector_2D.at(1).at(0)<<endl;
    cout<<"The value [1][1] is "<<vector_2D.at(1).at(1)<<endl;
    cout<<"The size of vector_2D is "<< vector_2D.size()<<endl;

    cout<<"\nThe first integer in vector1 is : "<<vector1.at(0)<<endl;
    cout<<"The second integer in vector1 is : "<<vector1.at(1)<<endl;
    cout<<"The size of vector1 is "<< vector1.size()<<endl;



}

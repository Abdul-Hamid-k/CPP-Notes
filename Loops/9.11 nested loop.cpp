// NESTED LOOP

#include<iostream>
#include<vector>

using namespace std;

int main(){

   // for(int num1 {1}; num1<=10; ++num1)               //innerloop work faster than the outerloop.
   // {
   //     for(int num2 {1}; num2<=10; ++num2)
   //     {cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
   //     }
   //     cout<<"--------------------------\n"<<endl;
   // }

   //EXAMPLE 2
   int num_data {};
   vector <int> data {};

   cout<<"Enter the number of data you have: ";
   cin>>num_data;

   for(int i {1}; i<=num_data; ++i)
   {
        int data_entry;
        cout<<"\nEnter the data in memory "<<i<< " : " ;
        cin>>data_entry;
        data.push_back(data_entry);

   }

   cout<<"\nDisplaying Histogram"<<endl;

   for(auto val : data)
   {
        for(int i {1}; i<=val; ++i)
        {
            if(i%5 == 0)
                cout<<"*";
            else
                cout<<"-";

        }
        cout<<endl;
   }





    return 0;
}

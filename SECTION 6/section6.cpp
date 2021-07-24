#include<iostream>

using namespace std;
//int age{18}                       //The variable outside the functions called global function which is applied to all the functions
                                    //The local variable get priority over global function.

int main()
{                                   //The variable within the function is called local variable.
    int age;//eg. of local variable //Here our variable age is not initialized means value is not declaired. If I give output without
                                    //initializing it will give anything. The thing is if we don't have any fix value system will
    cout<<age<<endl;                //declair a garbage value. If we use variable without declairation coumpilor will give warning.

    //int age(21);                  //This is the proper way of initialisation. Initialize before use.
    //cout<<age<<endl;

    //int age = 21; //int age (21); //int age {21} // This are the types of initializing the variable

    //One more importing thing we don't need to declare or initialize variable at the top at the same time,
    //We can use declare or initialize vareable at the time before we use. you can see below.

    //int a {23};
    //cout<<a<<endl;
    //int b {25};
    //cout<<b<<endl;

    cout<<"==============================================="<<endl;

    int num_of_rooms;

    const double price_per_room {32.5};
    const double sales_tax {0.06};
    const int expiery {30}; //days

    cout<<"Welcome to the carpet cleaning service"<<endl;

    cout<<"\nHow many rooms you want to be cleaned ? ";

    cin>>num_of_rooms;

    cout<<"Number of rooms : "<<num_of_rooms<<endl;

    cout<<"Cost of cleaning per room : $"<<price_per_room<<endl;

    cout<<"cost for the "<<num_of_rooms<<" rooms : $"<<price_per_room * num_of_rooms<<endl;

    cout<<"TAX : $"<< price_per_room * num_of_rooms * sales_tax << endl;

    cout<<"==========================================="<<endl;

    cout<<"Total Estimate for carpet cleaning" << endl;

    cout<<"Total Cost : $"<<(price_per_room * num_of_rooms) + (price_per_room * num_of_rooms * sales_tax)<<endl;

    cout<<"This estimate is valid for "<<expiery<<" days."<<endl;




/* *******************************************************************************************************************************

int num_of_small_rooms;
    int num_of_large_rooms;

    const double price_per_small_room {25};

    const double price_per_large_room {35};

    const double sales_tax {0.06};

    const int estimate_expiry {30}; //days



    cout<<"Welcome to the carpet cleaning services"<<endl;

    cout<<"\nEstimate for the carpet cleaning services\n"<<endl;

    cout<<"How many number of small rooms you want to cleaned? ";
    cin>>num_of_small_rooms;

    cout<<"How many number of large rooms you want to cleaned? ";
    cin>>num_of_large_rooms;

    double cost_of_small_rooms = price_per_small_room * num_of_small_rooms;

    double cost_of_large_rooms = price_per_large_room * num_of_large_rooms;

    double cost = cost_of_small_rooms + cost_of_large_rooms ;


    cout<<"Cost per small room : $"<<price_per_small_room<<endl;

    cout<<"Cost per large room : $"<<price_per_large_room<<endl;

    cout<<"cost : $"<< cost <<endl;

    cout<<"TAX : $"<< cost * sales_tax <<endl;

    cout<<"=========================================================================="<<endl;

    cout<<"Total Estimate : $"<< cost + (cost * sales_tax) <<endl ;

    cout<<"Estimate is valid for "<<estimate_expiry<<" days"<<endl;

********************************************************************************************************************************/
}



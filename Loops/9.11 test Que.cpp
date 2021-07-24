//9.12 test que
//5 MAY 2020

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    vector <int> data {};
    char choice {0};
    do{
        cout<<"---------------------------------\n"<<endl;
        cout<<"P-Print numbers"<<endl;
        cout<<"A-Add a number"<<endl;
        cout<<"M-Display mean of the numbers"<<endl;
        cout<<"S-Display the smallest number"<<endl;
        cout<<"L-Display the largest number"<<endl;
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

                    if (choice == 'P' || choice == 'p')
                        {
                        cout<<"[ ";
                            for(auto var : data)
                                {
                                    if( data.size() != 0 )
                                        {

                                           cout<<var<<" ";
                                        }
                                    else
                                        {
                                            cout<<" No value."<<endl;
                                        }
                                }
                         cout<<"]";
                                cout<<"\n"<<endl;
                        }
                    //---------------------------------------------------------------
                    else if(choice == 'A' || choice == 'a')
                        {
                            int data_entry {};
                            cout<<"Enter the number you want to add :";
                            cin>>data_entry;
                            data.push_back(data_entry);
                        }
                    //------------------------------------------------------------------

                    else if(choice == 'm' || choice == 'M')
                        {
                            if( data.size() != 0 )
                                {
                                    int sum {0};
                                    for(unsigned int i {0}; i< data.size(); ++i)
                                    {
                                        sum = sum + data.at(i);
                                    }
                                    double mean = static_cast <double> (sum) / data.size();
                                    cout<<fixed<<setprecision(2);
                                    cout<<"The Mean of the give data :"<<mean<<endl;
                                }
                            else
                                cout<<"Unable to procide!! No data available.."<<endl;
                        }

                    //----------------------------------------------------------------------

                    else if( choice == 's' || choice == 'S' )
                        {
                            if( data.size() == 0 )
                                cout<<"Unable to determine smallest number - no data"<<endl;
                            else{
                                int smallest {0};
                                smallest = data.at(0);
                                    for(auto var : data){
                                        if( var<smallest ){
                                            smallest = var;
                                            cout<<"Smallest number :"<<smallest<<endl;
                                        }
                                }
                            }
                        }

                    //------------------------------------------------------------------------

                    else if( choice == 'L' || choice == 'l')
                        {
                            if(data.size() == 0){
                                cout<<"Unable to determine - no data"<<endl;
                            }
                            else{
                                int largest {};
                                largest = data.at(0);
                                    for(auto var : data){
                                        if( var>largest ){
                                            largest = var;
                                            cout<<"Largest number :"<<largest<<endl;
                                        }

                                    }
                            }
                        }

                    //-------------------------------------------------------------------------

                    else if ( choice == 'q' || choice =='Q' )
                        {
                            cout<<"See you soon...."<<endl;
                        }

                    //-------------------------------------------------------------------------

                    else
                        {cout<<"Illigal Entry -- try again..."<<endl;}



    }while (choice != 'q' && choice !='Q' );


    return 0;
}

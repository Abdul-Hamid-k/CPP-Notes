#include<iostream>
#include<vector>            //VECTOR is standard library.

using namespace std;

int main()
{
    //<<<INITIALISATION OF VECTORS>>>
    //vector <data type> name_of_vector (no._of_vectors) {values of vector};
    //vector <int> marks (5) {10, 20, 30, 40, 50};
    //vector <char> vowel {'a', 'e', 'i', 'o', 'u'};

    //<<<DECLAIRATION OF VECTOR>>>
    //vector <char> vowel (5);          //init of vector for 5 character name vowel.
    //vector <int> test_score (6);      //init of vector for 6 intiger name test_score.
                                        //They austomatically take the uninetialised values as 0.

    //vectors are more better than arrays.
    //for uninitialised value vectors do not take garbage value it takes 0 for uninitialised values.


    //<<<ASSESSING VECTOR ELIMENTS>>>
    //part 1
    vector <int> test_score {10, 20, 30, 40, 50};

    cout<<"The value of test score in index 0 : "<< test_score.at(0)<<endl;         //Here ".at(x)" is a function tells the system
    cout<<"The value of test score in index 1 : "<< test_score.at(1)<<endl;         //that we want to call the value at (x) position
    cout<<"The value of test score in index 2 : "<< test_score.at(2)<<endl;         //in index.
    cout<<"The value of test score in index 3 : "<< test_score.at(3)<<endl;
    cout<<"The value of test score in index 4 : "<< test_score.at(4)<<endl;

    cout<<"\nReAssign the values of test score"<<endl;
    cin>>test_score.at(0);
    cin>>test_score.at(1);
    cin>>test_score.at(2);
    cin>>test_score.at(3);
    cin>>test_score.at(4);

    cout<<"\nReAssigned values are as follow"<<endl;
    cout<<"The value of test score in index 0 : "<< test_score.at(0)<<endl;
    cout<<"The value of test score in index 1 : "<< test_score.at(1)<<endl;
    cout<<"The value of test score in index 2 : "<< test_score.at(2)<<endl;
    cout<<"The value of test score in index 3 : "<< test_score.at(3)<<endl;
    cout<<"The value of test score in index 4 : "<< test_score.at(4)<<endl;


    cout<<"There are "<<test_score.size()<<" values in the test score"<<endl;
    // Here "test_score.size()" says how many elemets in the vector or what is the size of vector.

    // Vector can provide bounce check by giving error in the terminal while in arrays program will get crashed.
    //We can also use array syntax in vectors.
    cout<<"\n============================================\n"<<endl;
    // *** Vector provide a amazing function called "pushback function" which provide us the ability to add the values in vector
    // we know in arrays the limit is pre defined but in vector it is not compulsory by applying the pushback function we can add
    // the value in the vector. ***

    //part 2
    vector <int> test1_score {11, 22};
    test1_score.push_back(33);                   //{11,22,33} , 33 is add in the vector.
    test1_score.push_back(44);                   //{11,22,33,44} , 44 is add in the vector.
    cout<<"Test score after adding first additional value :"<<test1_score.at(2)<<endl;
    cout<<"Test score after adding second additional value :"<<test1_score.at(3)<<endl;



   // sort(vector_name.begin(), vector_name.end());       //used to sort the vector from begening to end.



}

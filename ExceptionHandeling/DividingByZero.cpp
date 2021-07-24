#include<iostream>

using namespace std;

int main(){
    int num;
    int sum = 0;
    int total = 0;
    cout << "Enter the number you want to store: ";
    cin >> num;
    int nums[num];

    for(int i = 0; i<num; i++){
        cout << "[" << i+1 << "]: ";
        cin >> nums[i];
        sum = sum + nums[i];
        total += 1;
    }

    try{
        if(total == 0)
            throw total;
        else{
            float average = static_cast<double>(sum) / total;
            cerr << "[Average]: " << average << endl;
        }
    }

    catch(int &exp){
        cout << "Can't divide by zero" << endl;
    }
}
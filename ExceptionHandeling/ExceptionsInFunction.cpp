#include<iostream>

using namespace std;

void cal_sum(int &sum, int &total){
    int num; 

    cout << "Enter the number you want to store: ";
    cin >> num;
    int nums[num];

    for(int i = 0; i<num; i++){
        cout << "[" << i+1 << "]: ";
        cin >> nums[i];
        sum = sum + nums[i];
        total += 1;
    }

    cout << "[Sum]: " << sum << ", [Total]: " << total << endl;
}

double cal_avg(int sum, int total){
    try{
        if(total == 0)
            throw total;
        else    
            return (static_cast<double>(sum) / total);
    }

    catch(int &exp){
        cout << "Can't divide by zero" << endl;
        return 0;
    }
}

int main(){
    int sum {};
    int total {};

    cal_sum(sum, total);
    
    double Average = cal_avg(sum, total);
    cout << "[Average]: " << Average << endl;
    return 0;
}
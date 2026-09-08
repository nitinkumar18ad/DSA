#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum = 0;
    int num;

    for(int i =1;i<n;i++){
        cin>>num;
        sum += num;
    }

    double avg = (double)sum/n;
    cout<<"sum="<<sum <<endl;
    cout<<"Avg="<<avg;

    return 0;
}
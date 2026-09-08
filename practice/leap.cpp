#include<iostream>
using namespace std;

int leap(int year){
    if((year % 400 == 0) || ( year % 4 == 0 && year % 100 !=0)){
        cout<<"leap Year";
    }
    else
        cout<<"not leap year";
}

int main(){
    int year;
    cin>>year;

    leap(year);

    return 0;
}
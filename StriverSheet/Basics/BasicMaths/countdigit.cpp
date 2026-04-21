#include<iostream>
#include<cmath>
using namespace std;

//Basic:

int count(int n){
    if(n==0) 
    return 1;

    int count = 0;
    while(n>0){
        n = n/10;
        count++;
    }
    return count;
}

//Optimal:

// int count(int n){
//     if(n==0)
//     return 1;

//     return floor(log10(n)) + 1;
// }

int main(){
    int n;
    cout<<"Enter a input:";
    cin>>n;
    cout<<"Number of digit:"<<count(n);
}
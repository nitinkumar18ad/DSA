#include<iostream>
using namespace std;

int sumofdigits(int n){
    int sum = 0;

    while(n>0){
        int lastDigit = n%10;
        n /= 10;

        sum += lastDigit;

    }

    return sum;
}

int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;

    cout<<sumofdigits(n);
}
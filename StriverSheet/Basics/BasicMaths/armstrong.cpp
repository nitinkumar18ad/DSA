#include<iostream>
#include<cmath>
using namespace std;

int power(int base,int exponent){
    int result = 1;
    for(int i=0; i<exponent;i++){
        result *= base;
    }
    return result;

    }

bool armstrong(int n){
    int original = n;
    int sum = 0;

    int digits = 0;
    int temp = n;
    while(temp > 0){
        digits++;
        temp /= 10;
    }
    temp = n;

    while(temp>0){
        int digit = temp % 10;
        sum += power(digit,digits);
        temp /= 10;
    }
    return sum == original;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(armstrong(n))
        cout<< "True";
    else
        cout<< "False";
}
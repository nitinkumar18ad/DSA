#include<iostream>
using namespace std;

int digit(char n){
    if(n >= '0' && n <= '9'){
        cout<<"Digit";
    }
    else
        cout<<"not a digit";
}

int main(){
    char n;
    cin>>n;

    digit(n);

    return 0;
}
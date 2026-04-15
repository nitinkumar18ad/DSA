#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 0;i<n;i++){
        cout<< endl;
        for(int j = 0;j<i+1;j++){
            cout<<"*";
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    pattern(n);
}
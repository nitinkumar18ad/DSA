#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 0;i<n;i++){
        for(int j=i-1; j<n-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    pattern(n);
}
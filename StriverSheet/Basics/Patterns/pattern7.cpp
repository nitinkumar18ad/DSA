#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 0; i<=n ; i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
            }   
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }
            cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>> n;

    pattern(n);
}
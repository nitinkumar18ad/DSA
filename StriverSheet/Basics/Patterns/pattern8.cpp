#include<iostream>
using namespace std;

void pattern(int n){
    for(int i= 1 ;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*(n-i)+1;j++){
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
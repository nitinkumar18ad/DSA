#include<iostream>
using namespace std;

int evenodd(int n){
    if(n%2 == 0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;

    evenodd(n);

    return 0;
}

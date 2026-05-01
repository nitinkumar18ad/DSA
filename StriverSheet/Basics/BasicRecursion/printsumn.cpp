#include<iostream>
using namespace std;

int sumN(int n){

    //Base Case
    if(n == 0 ) return 0;

    return n + sumN(n-1);

}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<sumN(n);
}
#include<iostream>
using namespace std;

int N(int n){
    for(int i=n; i>= 1;i--){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;

    N(n);
    return 0;


}
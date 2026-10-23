#include<iostream>
using namespace std;

int main(){
    int n = 3;
    int oddSum = 0;

    for(int i =0;i<=n;i++){
        if(i%2 != 0){
            oddSum += i;
        }
    }
    cout<<oddSum<<endl;

    return 0;
}
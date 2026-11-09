#include<iostream>
using namespace std;

int main(){
    int n = 3;
    int sum = 0;
    int i =1;

    while(i<=n){
        sum += i;
        i++;
    }

    // for(int i=0;i<=n;i++){
    //     sum += i;
    // }
    cout<<sum;

    return 0;
}
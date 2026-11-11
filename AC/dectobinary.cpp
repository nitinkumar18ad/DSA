#include<iostream>
using namespace std;

int dectobi(int n){
    int pow = 1,ans = 0;

    while(n>0){
        int rem = n%2;
        n /= 2;

        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int n =5;
    cout<<dectobi(n);

    return 0;
}
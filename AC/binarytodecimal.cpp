#include<iostream>
using namespace std;

int bintodec(int bino){
    int ans = 0,pow = 1;

    while(bino>0){
        int rem = bino%10;
        ans += rem*pow;

        bino /= 10;
        pow *= 2;

    }
    return ans;
}

int main(){
    int bino = 110010;

    cout<<bintodec(bino);

    return 0;
}
#include<iostream>
#include<vector>

using namespace std;

int sqrt(int n){
    int low = 1, high = n;
    int ans = 0;

    while(low <= high){
        long long mid = low + (high-low)/2;

        if(mid * mid <= n){
            ans = mid ;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n = 28;
    cout<<"Square Root:"<<sqrt(n);

    return 0;
}
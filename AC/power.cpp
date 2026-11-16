#include<iostream>
using namespace std;

double power(double x, int n){
    if(x == 0) return 1.0;
    if(n == 0) return 1;
    if(x == 1) return 1.0;
    if(x == -1 && n%2 == 0) return 1.0;
    if(x == -1 && n != 0) return -1.0;

    long bf = n;
    if(n<0){
        x = 1/x;
        bf = -bf;
    }
    double ans = 1;

    while(bf >0){
        if(bf % 2 == 1){
            ans *= x;
        }
        x *= x;
        bf /= 2;
    }
    return ans;
}

int main(){
    double x;
    int n;
    cout<<"Enter the value of x and n"<<endl;
    cin>>x>>n;

    cout<<power(x,n);
    
    return 0;
}
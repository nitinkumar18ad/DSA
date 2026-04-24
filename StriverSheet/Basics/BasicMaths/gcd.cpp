#include<iostream>
using namespace std;


//BruteForce:
// int gcd(int a,int b){
//     int ans = 0;
//     for(int i = 1;i<min(a,b);i++){
//         if(a%i == 0 && b%i == 0)
//             ans = i;
//     }
//     return ans;
//     }

//Optimal:
int gcd(int a,int b){
    while(b!=0){
        int temp = b;
        b = a% b;
        a = temp;

    }
    return a;

}

    int main(){
        int n1,n2;
        cout<<"Enter the value of a and b:";
        cin>>n1>>n2;
        cout<<gcd(n1,n2);
    }
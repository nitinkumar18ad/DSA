#include<iostream>
using namespace std;


// Sum of n numbers
// int main() {
//     int n;
//     cin >> n;

//     int i =1;
//     int sum =0;

//     while(i<=n){
//         sum = sum + i;
//         i=i+1;
//     }

//     cout<<"value of sum is "<<sum<<endl;
//}



// Prime or not
int main() {
    int n;
    cin >> n;

    int i = 2;
    while(i<n){
        if(n%i==0){
            cout<<"Not prime "<<endl;
            return 0;
    
        }
         i=i+1;
    }   
    cout<<"Prime"<<endl;
    return 0;
        
    }
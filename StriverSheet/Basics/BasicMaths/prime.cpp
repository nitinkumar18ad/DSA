#include<iostream>
using namespace std;

//Optimal
bool prime(int n){

    if(n<=1) return false;

    for(int i = 2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;

}

//bruteForce 
// bool prime(int n){
//     if(n<=1) return false;

//     for(int i = 2;i<n;i++){
//         if(n%i == 0){
//             return false;
//         }
//         return true;
//     }
// }

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    if(prime(n))
        cout<<"Prime";

    else
        cout<<"Not Prime";

    return 0;
}
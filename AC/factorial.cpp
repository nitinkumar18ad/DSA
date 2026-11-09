#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int fact = 1;
    int i = 1;

    // for(int i = 1;i<=n;i++){
    //     fact *= i;
    // }


    while(i<=n){
        fact *= i;
        i++;
    }
    

    cout<<fact;

    return 0;
}
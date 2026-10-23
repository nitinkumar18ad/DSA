#include<iostream>
using namespace std;

int main(){
    int n = 6;
    int evenSum = 0;
    int i =0;

    // for(int i=1;i<=n;i++){
    //     if(i%2 == 0){
    //         evenSum += i;
    //     }
    // }


    while(i<=n){
        if(i%2 == 0){
            evenSum += i;
            
        }
         i++;
    }
   

    cout<<evenSum<<endl;

    return 0;
}
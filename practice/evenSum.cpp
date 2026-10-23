#include<iostream>
using namespace std;

int main(){
    int n = 50;
    int evenSum = 0;

    for(int i=1;i<=n;i++){
        if(n%i == 0){
            evenSum += i;
        }
    }
    cout<<evenSum<<endl;

    return 0;
}
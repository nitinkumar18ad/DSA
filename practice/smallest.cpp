#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,2,9,4,1};
    int smallest = arr[0];

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i= 0;i<n;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }

    }
    cout<<"Smallest:"<<smallest<<endl;
}
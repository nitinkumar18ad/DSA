#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int target){
  
    for(int i = 0;i<n;i++){

        if(arr[i] == target){
            return i;
        }
        
    }

    return -1;

}

int main(){

    int arr[] = {1,58,9,54,5,3,78};

    int target = 31;
    int n = 6;

    cout<<linearSearch(arr,n,target);

}
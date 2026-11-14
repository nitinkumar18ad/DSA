#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {8,9,5,1,6};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIdx = 0;
    int maxIdx = 0;

    //smallest
    for(int i =0;i<size;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            minIdx = i;
        }
    }

    //largest
    for(int i =0;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
            maxIdx = i;
        }
    }

    cout<<"Smallest index:"<<minIdx<<endl;
    cout<<"largtest index:"<<maxIdx<<endl;

return 0;
}
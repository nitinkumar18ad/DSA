#include<iostream>
#include<climits>
using namespace std;

int swapminmax(int arr[],int size){
    int max = INT_MIN;
    int min = INT_MAX;

    int maxIdx = 0;
    int minIdx = 0;

    for(int i = 0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
            maxIdx = i;
        }
        if(arr[i] < min){
            min = arr[i];
            minIdx = i;
        }
    }
    swap(arr[maxIdx],arr[minIdx]);
    
}


int main(){
    int arr[] = {8,6,5,7,1,3};
    int size = 6;

    swapminmax(arr,size);

    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
#include<iostream>

using namespace std;

int main(){
    int arr[] = {0, 1, 0, 3, 12};
    int pos = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0;i<n;i++){
        if(arr[i] != 0){
            arr[pos] = arr[i];
            pos++;
        }
    }
    for(int i = pos;i<n;i++){
        arr[i] = 0;
    }
    for(int i =0;i<n;i++){
        cout<<arr[i] <<" ";
    }
}
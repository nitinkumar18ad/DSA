#include<iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = n-1;

    for(int i =0;i<n;i++){
        if(left<right){
            swap(left[arr],right[arr]);
            left++;
            right--;
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
}
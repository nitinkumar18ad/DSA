#include<iostream>
using namespace std;

void rev(int arr[],int left,int right){
    if(left >= right) return;

    swap(arr[left],arr[right]);

    rev(arr,left+1,right-1);

}

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};

    rev(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
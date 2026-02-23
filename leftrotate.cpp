#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& arr,int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void leftRotate(vector<int>& arr,int k){
int n = arr.size();
 k = k%n; //handle k>n
 reverse(arr,0,k-1);//reverse first k element
 reverse(arr,k,n-1);//reverse remaining element
 reverse(arr,0,n-1);//reverse whole element
}

int main() {
    vector<int> arr ={1,2,3,4,5};
    int k = 2;

    leftRotate(arr,k);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
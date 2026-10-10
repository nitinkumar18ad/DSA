#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 4, 8, 10};
int target = 10;

int n = sizeof(arr)/sizeof(arr[0]);

int l = 0;
int r = n-1;

while(l<r){
    int sum = arr[l] + arr[r];

    if(sum == target){
        cout<<"True"<<endl;
        return 0;
    }
    else if(sum < target){
        l++;
    }
    else{
        r--;
    }
}
cout<<"false"<<endl;
}
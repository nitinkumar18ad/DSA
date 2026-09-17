#include<iostream>

using namespace std;

int main(){
int arr[] = {2, 5, 2, 8, 2, 9};
int target = 2;
int n = sizeof(arr)/sizeof(arr[0]);
int count = 0;

for(int i =0;i<n;i++){
    if(arr[i] == target){
        count++;
    }
}
cout<<"Frequency:"<<count<<endl;
}
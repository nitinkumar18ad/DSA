#include<iostream>
using namespace std;

int main(){
int arr[] = {1, 1, 2, 3, 3, 5, 5, 7};
int unique = 0;
int n = sizeof(arr)/sizeof(arr[0]);

for(int i = 1;i<n;i++){
    if(arr[i] != arr[unique]){
        unique++;
        arr[unique] = arr[i];
    }
}
cout<<unique+1<<endl;
}
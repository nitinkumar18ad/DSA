#include<iostream>
#include<iterator>
using namespace std;

int main(){
int arr[] = {7,2,9,4,1};
int largest = arr[0];
int n = sizeof(arr) / sizeof(arr[0]);

for(int i =0;i<n;i++){
if(arr[i] > largest){
largest = arr[i];
}
}
cout<<"Largest"<<largest<<endl;
}
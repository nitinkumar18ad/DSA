#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int arr[] = {2,5,2,8,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int>freq;

    for(int i=0; i<n;i++){
        freq[arr[i]]++;
    }

    for(auto x:freq){
        cout<<x.first<< "-"<<x.second <<endl;
    }
}
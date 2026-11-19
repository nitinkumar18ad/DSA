#include<iostream>
#include<vector>
using namespace std;

int recbinarySearch(vector<int> arr,int tar,int st,int end){
    int mid = st + (end-st)/2;
    while(st <= end){
        
        
        if(tar  > arr[mid]){
            return recbinarySearch(arr,tar,mid+1,end);
        }else if (tar < arr[mid]){
            return recbinarySearch(arr,tar,st,mid - 1);
        }else{
            return mid;
        }
    }


    
    return -1;
}

int main(){
    vector<int> arr = {1,5,9,14,25,98};
    int tar = 25;

    cout << recbinarySearch(arr, tar, 0, arr.size() - 1);

    return 0;
}
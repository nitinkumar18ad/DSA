#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> &arr,int s , int e , int key){
    if(s>e)
    return -1;

    int mid = s + (e-s)/2;

    if (arr[mid] == key){
        int leftAns= firstOcc(arr,s,mid-1,key);
        return (leftAns == -1)? mid: leftAns;
    }
    else if (arr[mid] < key){
        return firstOcc(arr,mid+1,e,key);
    }
    else {
        return firstOcc(arr,s,mid-1,key);
    }

}

int lastOcc(vector<int>&arr,int s,int e,int key){
    if(s>e)
    return -1;

    int mid = s + (e-s)/2;

    if (arr[mid] == key){
        int rightAns = lastOcc(arr,mid + 1,e,key);
        return (rightAns == -1) ? mid : rightAns;
    }
    else if (arr[mid] < key){
        return lastOcc(arr,mid+1,e,key);
    }
    else{
        return lastOcc(arr,s,mid-1,key);
    }
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOcc(arr, 0, n - 1, k);
    int last = lastOcc(arr, 0, n - 1, k);
    return {first, last};
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    int n = arr.size();
    int key = 3;

    pair<int, int> ans = firstAndLastPosition(arr, n, key);
    cout << "First Occurrence: " << ans.first << endl;
    cout << "Last Occurrence: " << ans.second << endl;

    return 0;
}
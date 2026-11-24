#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isPossible(vector<int> &arr,int n , int m,int maxAllocation){
    int painters = 1, time = 0;

    for(int i =0;i<n;i++){
        if(time + arr[i] <= maxAllocation){
            time += arr[i];
        }else{
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
}

int minTime(vector<int> &arr,int n ,int m){
    int sum = 0, maxVal = INT_MIN;
    for(int i =0;i<n;i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal,end = sum,ans = -1;

    while(st <= end){
        int mid = st + (end-st)/2;

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;

        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {40,30,10,20};
    int m = 2,n = 4;

    cout<<minTime(arr,n,m)<<endl;
    return 0;
}
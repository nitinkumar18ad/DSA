#include<iostream>
#include<vector>

using namespace std;

void bubble(vector<int>& nums,int n){
    if(n==1)
        return;

    for(int i = 0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
            swap(nums[i],nums[i+1]);
        }
    }
    bubble(nums,n-1);
}

vector<int>bubbleSort(vector<int>& nums){
    bubble(nums,nums.size());
    return nums;
}

int main() {
    vector<int> nums = {7,4,1,5,3};
    cout<<"Bubble Sort:";

    bubbleSort(nums);
    for(int x:nums) cout<<" "<< x;
}
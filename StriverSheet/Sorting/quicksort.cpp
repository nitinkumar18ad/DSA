#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>& nums,int low,int high){
    int pivot = nums[low];
    int i = low;
    int j = high;

    while(i<j){
        while(nums[i]<= pivot && i<high)
        i++;
        while(nums[j]> pivot && j>low)
        j--;

        if(i<j)
            swap(nums[i],nums[j]);
    }
    swap(nums[low],nums[j]);
    return j;
}

void qs(vector<int>& nums,int low,int high){
    if(low<high){
        int pIndex = partition(nums,low,high);
        qs(nums,low,pIndex-1);
        qs(nums,pIndex+1,high);
    }
}

vector<int> quickSort(vector<int>& nums){
    qs(nums,0,nums.size()-1);
    return nums;
}

int main() {
    vector<int> nums = {7,4,1,5,3};
    cout<<"Quick Sort:";

    quickSort(nums);
    for(int x:nums) cout<<" "<< x;
}
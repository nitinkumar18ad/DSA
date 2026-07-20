#include<iostream>
#include<vector>

using namespace std;

int peakElement(vector<int>& nums){
    int low = 0,high = nums.size()-1;

    while(low < high){
        int mid = low + (high-low)/2;

        if(nums[mid]>nums[mid+1])
            high = mid;
        else
            low = mid + 1;
    }
    return low;
}

int main(){
    vector<int> nums = {1,2,3,1};
    cout<<"Peak Element:"<<peakElement(nums);

    return 0;
}
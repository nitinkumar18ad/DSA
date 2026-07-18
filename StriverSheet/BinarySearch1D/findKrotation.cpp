#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int findKRotation(vector<int>& nums){
    int low = 0,high = nums.size()-1;
    int ans = INT_MAX;
    int index = -1;

    while(low <= high){
        if(nums[low] <= nums[high]){
            if(nums[low] <= nums[high]){
                ans = nums[low];
                index = low;
            }
            break;
        }
        int mid = low + (high-low)/2;

        if(nums[low] <= nums[mid]){
            if(nums[low]<ans){
                ans = nums[low];
                index = low;
            }
            low = mid + 1;
        }
        else{
            if(nums[mid]<ans){
                ans = nums[mid];
                index = mid;
            }
            high = mid-1;
        }
    }
    return index;

}

int main(){
    vector<int> nums = {4,5,6,1,2};
    cout<<"Find Rotations:"<<findKRotation(nums);

    return 0;
}
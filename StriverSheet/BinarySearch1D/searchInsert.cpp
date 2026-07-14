#include<iostream>
#include<vector>

using namespace std;

int searchInsert(vector<int>& nums,int target){
    int low = 0;
    int high = nums.size()-1;

    while(low <= high){
        int mid = low + (high-low)/2;

        if(nums[mid] == target)
            return mid;

        if(nums[mid] < target)
            low = mid +1;

        else
            high = mid-1;
    }
    return low;
}

int main(){
    vector<int> nums = {1,3,4,6,8};
    int target = 4;

    cout<<"Target:"<<searchInsert(nums,target);

    return 0;
}

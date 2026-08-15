#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int FindMin(vector<int>& nums){
    int low = 0,high = nums.size()-1;
    int ans = INT_MAX;

    while(low <= high){
        if(nums[low] <= nums[high]){
            ans = min(ans,nums[low]);
            break;
        }

        int mid = low + (high-low)/2;

        if(nums[low] <= nums[mid]){
            ans = min(ans,nums[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans,nums[mid]);
            high = mid-1;
        }
    }
    return ans;

}

int main(){
    vector<int> nums = {4,5,6,7,1,2};

    cout<<"Find Minimum:"<<FindMin(nums);

    return 0;
}
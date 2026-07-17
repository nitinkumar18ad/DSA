#include<iostream>
#include<vector>

using namespace std;

bool search(vector<int> & nums,int target){
    int low = 0,high = nums.size()-1;

    while(low <= high){
        int mid = low + (high-low)/2;

        if(nums[mid] == target)
            return true;

        if(nums[low] == nums[mid] && nums[mid] == nums[high]){
            low++;
            high--;
            continue;
        }

        if(nums[low] <= nums[mid]){
            if(nums[low] <= target && target < nums[mid])
                high = mid-1;
            else
                low = mid + 1;
        }
        else{
            if(nums[mid]< target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
}

int main(){
    vector<int> nums = {5,6,7,1,2,4};
    int target = 2;

    cout<<"Search :"<<search(nums,target);

    return 0;
}
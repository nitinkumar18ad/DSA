#include<iostream>
#include<vector>

using namespace std;

int linarSearch(vector<int>& nums){
    int target = 6;
    for(int i = 0;i<nums.size();i++){
        if(nums[i]== target)
        return i;
    }
    return -1;
}

int main(){
    vector<int> nums = {1,8,21,6,4};
    // int target = 6;

    cout<<"Target Element is at index:"<<linarSearch(nums);

}
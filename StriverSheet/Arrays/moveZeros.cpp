#include<iostream>
#include<vector>

using namespace std;

void moveZeros(vector<int>& nums){
    int j = 0;

    for(int i = 0;i<nums.size();i++){
        if(nums[i] != 0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}

int main(){
    vector<int> nums = {1,0,2,0,3,0};
    moveZeros(nums);
    for(int x: nums)
    cout<< x << " ";
}
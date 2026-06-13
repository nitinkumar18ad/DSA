#include<iostream>
#include<vector>

using namespace std;

int rotate(vector<int>& nums){
    int temp = nums[0];

    for(int i =1;i<nums.size();i++){
        nums[i-1] = nums[i];
    }
    nums[nums.size()-1] = temp;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    cout<<"Rotate Left By One:";

    rotate(nums);
    for(int x: nums)
    cout<< x << " ";
}
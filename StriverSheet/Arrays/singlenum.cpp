#include<iostream>
#include<vector>

using namespace std;

int singlenum(vector<int>& nums){
    int ans = 0;

    for(int i = 0;i<nums.size();i++){
        ans = ans^nums[i];
    }
    return ans;
}

int main(){
    vector<int> nums = {5,2,0,2,0,1,1};
    cout<<"Single Number:"<<singlenum(nums);
}
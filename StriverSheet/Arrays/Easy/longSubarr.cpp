#include<iostream>
#include<vector>

using namespace std;

int longSubarr(vector<int>& nums,int k){
    int maxi = 0;

    for(int i = 0;i<nums.size();i++){
        int sum = 0;
        for(int j = i;j<nums.size();j++){
            sum += nums[i];

            if(sum == k){
                maxi = max(maxi,j-i+1);
            }
        }
    }
    return maxi;
}

int main() {

    vector<int> nums = {1, 2, 3, 1, 1, 1, 1};
    int k = 6;

    cout << "Length of longest subarray = "
         << longSubarr(nums, k);

    return 0;
}
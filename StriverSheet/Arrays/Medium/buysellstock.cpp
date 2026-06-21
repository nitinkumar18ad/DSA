#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int>& nums){
    int mini = nums[0];
    int maxProfit = 0;

    for(int i=0; i<nums.size();i++){
        int profit = nums[i] - mini;
        maxProfit = max(maxProfit,profit);
        mini = min(mini,nums[i]);

    }
    return maxProfit;
}

int main(){
    vector<int> nums = {7,1,5,3,6,4};
    cout<<"Maximum Profit :"<<maxProfit(nums);
}
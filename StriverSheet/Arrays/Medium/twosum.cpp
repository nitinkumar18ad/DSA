#include<iostream>
#include<vector>

using namespace std;

vector<int> twosum(vector<int>& nums,int target){
    for(int i = 0; i<nums.size();i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            }
         }
    }
    return {};
}

int main(){
    vector<int> nums = {1,3,6,8,2};
    int target = 5;

    vector<int> ans = twosum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
    
}
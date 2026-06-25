#include<iostream>
#include<vector>

using namespace std;

vector<int> rearr(vector<int>& nums ){
    vector<int> ans(nums.size());

    int posIndex = 0;
    int negIndex = 1;

    for(int i= 0; i<nums.size();i++){
        if(nums[i] > 0){
            ans[posIndex] = nums[i];
            posIndex += 2;
        }
        else {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {-2,3,-1,5,9,-7};

    vector<int> ans = rearr(nums);
    
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
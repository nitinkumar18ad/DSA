#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>


using namespace std;

vector<int> leader(vector<int>& nums){
    int n = nums.size();
    vector<int> ans;
    int maxi = INT_MIN;

    for(int i = n-1;i>= 0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
            maxi = nums[i];
        }
    }
    reverse (ans.begin(),ans.end());
    return ans;
}

int main() {
    vector<int> nums = {1,5,-2,-9};
    vector<int> ans = leader(nums);

    for(int x: ans)
    cout<<x<<" ";
}
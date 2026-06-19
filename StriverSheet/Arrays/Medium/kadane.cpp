#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int kadane(vector<int>& nums){
    int sum = 0;
    int maxi = INT_MIN;

    for(int i = 0;i<nums.size();i++){
        sum += nums[i];
        maxi = max(maxi,sum);

        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    vector<int> nums = {2,3,4,6};

    int ans = kadane(nums);
    cout<<"Maximum subarray:"<<ans<<endl;
}
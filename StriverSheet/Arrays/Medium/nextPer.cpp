#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void nextPer(vector<int>& nums) {
    int n = nums.size();
    int index = -1;
    
    for(int i = n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index = i;
            break;
        }

    if(index == -1){
        reverse(nums.begin(),nums.end());
        return;
    }

    for(int i = n-1;i>index;i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
    }

    reverse(nums.begin()+index+1,nums.end());
    }
}

int main() {
    vector<int> nums = {1, 2, 5, 3, -6};
    nextPer(nums);
    cout << "Next Permutation: ";

    for (int x : nums)
        cout << x << " ";

    return 0;
}
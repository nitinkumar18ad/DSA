#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int longestConsecutive(vector<int>& nums){
    if(nums.empty()) return 0;

    sort(nums.begin(),nums.end());

    int longest = 1;
    int count = 1;

    for(int i = 1; i<nums.size();i++){
        if(nums[i] == nums[i-1] + 1){
            count ++;
        }
        else if (nums[i] != nums[i-1]){
            count = 1;
        }

        longest = max(longest,count);
    }

    return longest;
}

int main() {
    vector<int> nums = {1, 33, 2, 66, 89, 4, 5};
    int longest = longestConsecutive(nums);

    cout << "Longest Consecutive Sequence: " << longest << endl;

    return 0;
}
#include<iostream>
#include <vector>
using namespace std;
int minMoves(vector<int>& nums) {
    
        int greatest = -1;
        int n = nums.size();
        vector<int> nums2(n);

        for (int i = 0; i < n; i++) {
            if (nums[i] >= greatest) {
                greatest = nums[i];
            }
        }
        for (int i = 0; i < n; i++) {
            nums2[i] = greatest - nums[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums2[i];
        }

    return sum;
    }


int main(){

    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin >> nums[i];
    }

    cout << minMoves(nums);
    
}
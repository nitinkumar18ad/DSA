#include<iostream>
#include<vector>
using namespace std;

vector<int> selection(vector <int>& nums){
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j = i+1;j<n;j++){
            if(nums[j] <= nums[min]){
                min = j;
            }
        }
        swap(nums[i],nums[min]);
    }
    return nums;  
}
int main() {
    vector<int> nums = {7, 4, 1, 5, 3};
    cout << "Sorted Array:";
    
    selection(nums);
    for(int x: nums) cout << " " << x;
    return 0;
}
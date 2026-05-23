#include<iostream>
#include<vector>
using namespace std;

vector<int> insertion(vector<int>& nums) {
    int n = nums.size();
    for(int i=0;i<n;i++){
        int key = nums[i];
        int j = i-1;

        while(j>= 0 && nums[j]>key){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
    return nums;

}

int main() {
    vector<int> nums = {7,4,1,5,3};
    cout<<"Insertion Sort: ";

    insertion(nums);
    for(int x:nums) cout<<" "<< x;
}
#include<iostream>
#include<vector>

using namespace std;

int subarry(vector<int>& nums, int k){
    int n = nums.size();
    int count = 0;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += nums[j];
            if(sum == k)
                count++;
        }
    }
    return count;

}

int main(){
    vector<int> nums = {4,2,-9,7,0};
    cout<<"SubAray sum:"<<subarry(nums, 0);
}
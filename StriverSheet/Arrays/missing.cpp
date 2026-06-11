#include<iostream>
#include<vector>

using namespace std;

int missing(vector<int>& nums){
    int n = nums.size();

    int expectedsum = n * (n+1) / 2 ;
    int actualsum=0;

    for(int i = 0;i<n;i++){
        actualsum += nums[i];
    }

    return expectedsum - actualsum;

}

int main(){
    vector<int> nums = {0,1,2,4,5,6};
    cout<<"Missing Number:"<<missing(nums);
}
#include<iostream>
#include<vector>
using namespace std;

int moores(int n,vector<int> nums){
    int freq = 0,ans = 0;

    for(int i =0;i<n;i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;

}

int main(){
    vector<int>nums = {2,8,2,4,2,6};
    int n = nums.size();

    cout<<moores(n,nums);

    return 0;
}
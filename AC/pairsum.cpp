#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums,int target){
    vector<int>ans;
    int size = nums.size();

    //Brute Force

    //  for(int i =0;i<size;i++){
    //     for(int j = i+1;j<size;j++){
    //         if(nums[i]+nums[j] == target){
    //             ans.push_back(nums[i]);
    //             ans.push_back(nums[j]);
    //             return ans;

    //         }
            
    //     }
    // }

    //Optimal
    int i =0,j=size-1;
    while(i<j){
        int pairSum = nums[i] + nums[j];
        if(pairSum >target){
            j--;

        }else if(pairSum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
return ans;
}

int main(){
    vector<int> nums = {1,3,5,7,9};
    int target = 12;

    vector<int>ans = pairSum(nums, target);
    cout<<ans[0]<<","<< ans[1]<<endl;

    return 0;
}
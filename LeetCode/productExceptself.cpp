#include<iostream>
#include<vector>
using namespace std;

vector<int>productExceptself(vector<int> nums){
    int n = nums.size();
    vector<int>ans(n,1);

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
           if(i != j){
            ans[i] *= nums[j];
        } 
        }
    }
    return ans;
}

int main(){

    vector<int>nums = {2,5,7,4,6};
    int n = nums.size();

   
   for (int value : productExceptself(nums)) {
       cout << value << ' ';
   }

   return 0;
}
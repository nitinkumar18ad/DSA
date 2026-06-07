#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void rotateLeftK(vector<int>& nums, int k){
    int n = nums.size();
    k = k%n;

    vector<int>temp (k);

    for(int i = 0;i<k;i++){
        temp[i]= nums[i];
    }

    for(int i = k;i<n;i++){
        nums[i-k] = nums[i];
    }

    for(int i = 0;i<k;i++){
        nums[n-k+i] = temp[i];
    }

}

int main(){
    vector<int> nums = {1,2,3,4,5};
    cout<<"Rotate Left By K:";
    rotateLeftK(nums,2);
    for(int x: nums)
    cout<< x << " ";
}

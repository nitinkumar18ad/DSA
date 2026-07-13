#include<iostream>
#include<vector>

using namespace std;

int lowerBound(vector<int> & nums,int x){
    int low = 0;
    int high = nums.size()-1;
    int ans = nums.size();

    while(low <= high){
        int mid = low + (high-low)/2;

        if(nums[mid] >= x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,3,6,9};
    int x = 2;

    cout<<"Lower Bound:"<<lowerBound(nums,x);
}
#include<iostream>
#include<vector>

using namespace std;

vector<int> floorAndceil(vector<int> nums,int x){
    int floor = -1,ceil = -1;
    int low = 0,high = nums.size()-1;

    while(low <= high){
        int mid = low + (high-low)/2;

        if(nums[mid] <= x){
            floor = nums[mid];
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    low = 0;
    high = nums.size()-1;

    while(low <= high){
        int mid = low + (high-low)/2;

        if(nums[mid] >= x){
            ceil = nums[mid];
            high = mid -1;       
        }
        else
            low = mid + 1;
    }
    return {floor, ceil};
}

int main(){
    vector<int> nums = {1,5,6,8,9};
    int x = 7;
    vector<int> result = floorAndceil(nums, x);
    cout<<"Floor and Ceil: "<<result[0]<<" "<<result[1];
    

    return 0;
}
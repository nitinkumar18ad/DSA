#include<iostream>
#include<vector>

using namespace std;

void colorsort(vector<int>& nums){
    int zero = 0, one = 0, two = 0;

    for(int i = 0;i<nums.size();i++){
        if(nums[i] == 0){
            zero++;
        }
        else if(nums[i] == 1){
            one++;
        }
        else{
            two++;
        }
    }
    int index = 0;
    while(zero>0){
        nums[index] = 0;
        index++;
        zero--;
    }
    while(one>0){
        nums[index] = 1;
        index++;
        one--;
    }
    while(two>0){
        nums[index] = 2;
        index++;
        two--;
    }
}

int main(){
    vector<int> nums = {1,2,0,1,0,2};
    
    colorsort(nums);
    for(int x: nums)
    cout<< x << " ";
}
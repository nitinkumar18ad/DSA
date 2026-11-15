#include<iostream>
#include<vector>
using namespace std;


int majority(vector<int> nums,int n){
    for(int val : nums){
        int freq = 0;
        for(int el : nums ){
            if(el == val){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
}

int main(){
    vector<int>nums = {1,2,1,3,1};
    int n = nums.size();

    cout<<majority(nums,n);

}
#include<iostream>
#include<vector>

using namespace std;

int duplicate(vector<int>& nums ){
    int i = 0;
    for(int j = 1;j<nums.size();j++){
        if(nums[j] != nums[i]){
        i++;
        nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main(){
    vector<int> nums = {1,1,2,2,2,3,4,4,5};
    int k = duplicate(nums);
    cout<<"Number of Unique element:"<<k<<endl;
    cout<<"Remove Duplicate:";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//Bruteforce
// int SecLar(vector<int>& nums){
//     sort(nums.begin(),nums.end());
//     return nums[nums.size()-2];
// }

int SecLar(vector<int>& nums){
    int largest = nums[0];
    int secondlargest = largest;

    for(int i = 1;i<nums.size();i++){
        if(nums[i]>largest){
            secondlargest = largest;
            largest = nums[i];
        }
        // else if(nums[i]<largest && nums[i]>secondlargest){
        //     secondlargest = nums[i];
        // }
    }
    return secondlargest;

}

int main(){
    vector<int> nums = {3,4,6,1};
    cout<<"Largest Element:"<<SecLar(nums);
    return 0;
}
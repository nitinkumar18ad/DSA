#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//Bruteforce
// int largestElement(vector<int>& nums){
//     sort(nums.begin(),nums.end());
//     return nums[nums.size() -1];
// }

//Optimal
int largestElement(vector<int>& nums){
    int largest = nums[0];

    for(int i =1;i<nums.size();i++){
        if(nums[i]>largest){
            largest = nums[i];
        } 
    }
    return largest;


}

int main(){
    vector<int> nums = {3,3,6,1};
    cout<<"Largest Element:"<<largestElement(nums);
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>nums,int n){
    int count0 = 0,count1 = 0, count2 = 0;

    for(int i = 0;i<n;i++){
        if(nums[i] == 0){
            count0++;
        }else if(nums[i] == 1){
            count1++;
        }else{
            count2++;
        }
    }

int Idx = 0;
for(int i=0;i<count0;i++){
    nums[Idx++] = 0;
}
for(int i=0;i<count1;i++){
    nums[Idx++] = 1;
}
for(int i=0;i<count2;i++){
    nums[Idx++] = 2;
}  

for(int i =0;i<n;i++){
    cout<<nums[i]<<" ";
}
}



int main(){
    vector<int> nums = {1,0,1,0,2,1};
    int n = nums.size();

    sortColors(nums,n);


    return 0;

}
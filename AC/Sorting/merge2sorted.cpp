#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>nums1,vector<int>nums2,int m,int n){
    int idx = m + n -1,i = m-1,j = n-1;

    while(i >= 0 && j >= 0){
        if(nums1[i] >= nums2[j]){
            nums1[idx] = nums1[i];
            idx--,i--;
        }else{
            nums1[idx] = nums2[j];
            idx--,j--;
        }
    }
    while(j >= 0){
        nums1[idx--] = nums2[j--];
    }

    for(int i = 0; i < m+n; i++){
        cout << nums1[i] << " ";
    }
}
int main(){
    vector<int>nums1 ={1,3,5,0,0,0};
    int m = 3;
    vector<int>nums2 ={2,4,6};
    int n = 3;

    cout<<merge(nums1,nums2,m,n);
    

    return 0;

}
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[] = {1,5,-3,6,-9,2};
    int size = 6;

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i =0;i<size;i++){
        currSum += nums[i];

        maxSum = max(currSum,maxSum);

        if(currSum<0){
            currSum = 0;
        }

    }

    cout<<maxSum;

    return 0;
}
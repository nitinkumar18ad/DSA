#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {5,-1,2,-8,9,7};
    int size = 6;

    int maxSum = INT_MIN;

    for(int st =0;st<size;st++){
        int currSum = 0;
        for(int end = st;end<size;end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }

    }
    cout<<"max subarray sum:"<<maxSum<<endl;

    return 0;
}
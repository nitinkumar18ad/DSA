#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int secondlargest(vector<int> &arr){
    int n = arr.size();
    // if (n < 2) return -1;

    int largest = arr[0];
    int seclargest = INT_MIN;
    
    for(int i=1; i<n;i++){
        if(arr[i]>largest){
            seclargest = largest;
            largest = arr[i];
        }
        else if (arr[i]<largest && arr[i] > seclargest){
            seclargest = arr[i];
        }
    }
    if(seclargest == INT_MIN){
        return -1;
    }
    return seclargest;
}

int main() {
    vector<int> arr = {10,20,4,45,99};
    cout << secondlargest(arr);
}
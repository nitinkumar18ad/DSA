#include <iostream>
#include <vector>

using namespace std;

void revarr(vector<int> &arr){
    int len = arr.size();

    for(int i=0; i<len/2; ++i){
        swap(arr[i],arr[len-i-1]);
    }
}


int main() {
    vector<int> arr = {10,20,4,45,99};
    revarr(arr);

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    return 0;
}
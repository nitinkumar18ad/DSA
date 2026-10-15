#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int arr[] = {4, 2, 7, 2, 9, 4};

    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_set<int>st;

    for(int i = 0;i<n;i++){
        if(st.count(arr[i])){
            cout<<"Duplicate occurs"<<endl;
        }
        else {
            st.insert(arr[i]);
        }

    }
    return 0;
}
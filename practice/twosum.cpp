#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int arr[] = {2,7,11,15};
    int target = 9;

    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>st;


    for(int i = 0;i<n;i++){
        int need = target - arr[i];

        if(st.count(need)){
            cout<<st[need]<<" "<<i;
            return 0;
        }
        st[arr[i]] == i;
    }
}
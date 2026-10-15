#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int>freq;

    int maxFrequency = 0;
    int mostFrequentnumber = 0;

    for(int i = 0;i<n;i++){
        freq[arr[i]]++;
    }

    for(auto item: freq){
        if(item.second > maxFrequency){
            maxFrequency = item.second;
            mostFrequentnumber = item.first;
            
        }
    }
    cout<<mostFrequentnumber<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,6,1,5,7};
    int size = 6;

    for(int i =0;i<size;i++){
        bool unique = true;

        for(int j = 0;j<size;j++){
            if(i != j && arr[i] == arr[j]){
                unique = false;
                break;
            }
        }
        if(unique){
        cout<<arr[i]<<" ";

    }
    
    }
    
    return 0;
    
}
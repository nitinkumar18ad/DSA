#include<iostream>
using namespace std;

int firstOcurr(int arr[],int n,int key){
    int s = 0,e = n-1;
    int mid = s +(e-s)/2;
    int ans = -1;

    while(s<=e){
        if( arr[mid] == key){
            ans =  mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

    int lastOcurr(int arr[],int n,int key){
        int s = 0,e = n-1;
        int mid = s +(e-s)/2;
        int ans = -1;
    
        while(s<=e){
            if( arr[mid] == key){
                ans =  mid;
                s = mid + 1;
            }
            else if(key > arr[mid]){
                s = mid + 1;
            }
            else if(key < arr[mid]){
                e = mid - 1;
            }
            mid = s +(e-s)/2;
        }
       return ans;
}

int main(){
    int even[6]={1,2,3,3,3,4};
    cout<<"First Occurence of 3 is at Index "<<firstOcurr(even,6,3)<<endl;
    cout<<"Last Occurence of 3 is at Index "<<lastOcurr(even,6,3)<<endl;
    return 0;
}

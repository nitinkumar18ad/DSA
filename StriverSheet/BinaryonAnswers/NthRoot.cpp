#include<iostream>
#include<vector>

using namespace std;

int Nthroot(int N,int M){
    int low =1,high = M;

    while(low<=high){
        long long mid = low + (high-low)/2;
        long long val = 1;

        for(int i= 0;i<N && val <= M;i++){
            val *= mid;

        if(val == M) return mid;
        if(val < M)
            low = mid + 1;
        else
            high = mid - 1;
        }
        return -1;
    }
}

int main(){
    int N,M;
    cout<<"N=";
    cin>>M;
    cout<<"M=";
    cin>>N;

    cout<<Nthroot(N,M);

    return 0;
}
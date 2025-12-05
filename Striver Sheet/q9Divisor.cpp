#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findDivisors(int n){
    vector<int>divisors;

    for (int i=1; i<=n;i++){
        if(n%i == 0){
            divisors.push_back(i);
        }
    }

    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main (){
    int n;
    cout<<"enter number:";
    cin >> n;

    vector<int>divisors = findDivisors(n);

    cout<<"Divisors: ";
    for(int d : divisors){
        cout<<d<<" ";
    }
    return 0;
}
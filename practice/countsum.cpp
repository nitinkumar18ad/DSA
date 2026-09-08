#include<iostream>
using namespace std;

int countd(int n){
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    return count;
}

int sumd(int n){
    int sum = 0;
    while(n != 0){
        int digit = n%10;
        sum += digit;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<"count:"<<countd(n) <<endl;
    cout<<"sum:"<<sumd(n);
}
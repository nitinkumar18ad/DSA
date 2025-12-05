#include<iostream>
using namespace std;

bool checkPelindrome(int n){
    int orignal=n;
    int reverse=0;

    while (n>0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    return orignal==reverse;
}

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    
    if(checkPelindrome(n))
    cout<<"Palindrome";

    else
    cout<<"Not Palindrome";

    return 0;
}
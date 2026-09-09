#include<iostream>
using namespace std;

int reverseNum(int n){
    int reverse = 0;
    while(n!= 0){
        int digit = n%10;
        reverse = reverse * 10 + digit;
        n = n/10;
    }
    return reverse;
}

bool isPalindrome(int n){
    int original = n;
    int reverse = reverseNum(n);
    return original == reverse;
}

int main(){
    int n;
    cin>>n;

    cout<<"reverse:"<<reverseNum(n)<<endl;
    if(isPalindrome(n))
        cout<<"Plaindrome";
    else
        cout<<"NOt plainderome";

    return 0;
}
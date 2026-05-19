#include<iostream>
using namespace std;

bool palindrome(string s,int l,int r){
    if(l >= r)
        return true;

    if(s[l] != s[r])
        return false;

    return palindrome(s,l+1,r-1);
}

int main(){
    string word;
    cout<<"Enter a word:";
    cin>>word;

    if(palindrome(word, 0, word.length() - 1))
        cout<<"True";
    else
        cout<<"False";
    
}
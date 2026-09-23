#include<iostream>
using namespace std;

int main(){
string s = "madam";
int n = s.size();
int left = 0;
int right = n-1;

while(left < right){
    if(s[left] != s[right]){
        cout<<"Not palindrome";
        return 0;
    }
    left++;
right--;
}
cout<<"Plaindrome";

}
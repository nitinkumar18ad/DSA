#include<iostream>
using namespace std;

int main(){
string s = "madam";
int n = s.size();
int left = 0;
int right = n-1;

for(int i =0;i<n;i++){
if(s[left]== s[right] ){
left++;
right--;
}
while(left < right){
    if(s[left] != s[right]){
        cout<<"Palindrome";
    }
    else {
        cout<<"NOT palindrome"<<endl;
        }
}
}
}
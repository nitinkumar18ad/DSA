#include<iostream>
using namespace std;

int main(){
string s = "banana";
char target = 'a';
int count = 0;
int n = s.size();

for(int i =0;i<n;i++){
    if(s[i] == target){
        count++;
    }
}
cout<<"Number:"<<count;
}
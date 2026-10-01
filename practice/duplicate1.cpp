#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
int arr[] = {3, 7, 2, 7, 5, 3, 9};
int n = sizeof(arr)/sizeof(arr[0]);
unordered_set<int>st;

for(int i =0;i<n;i++){
if(st.count(arr[i])){
cout<<"Duplicate occur"<<endl;
return 0;
}
else{
st.insert(arr[i]);
}
}
cout<<"Duplicate not occur"<<endl;
}
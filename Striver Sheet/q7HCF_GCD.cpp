#include<iostream>
using namespace std;

int GCD(int n1,int n2){
    while (n2 != 0)
    {
       int temp = n2;
       n2 = n1 % n2;
       n1 = temp;
    }
    return n1;
}

int main (){
    int n1,n2;
    cout<<"Enter number:";
    cin>>n1>>n2;
    cout<<GCD(n1,n2);
}
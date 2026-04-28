#include<iostream>
using namespace std;

void print(int n){

    //Base Case
    if(n == 0) return;


    cout<<n<<endl;

    //Recursive Call
    print(n-1);


}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;
    print(n);
}
#include<iostream>
using namespace std;

int largest(int a,int b,int c){
    if(a >= b && a >= c){
        cout<<"A";
    }
    else if (b>=c && b>=a){
        cout<<"B";
    }
    else
        cout<<"C";

}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    largest(a,b,c);

    return 0;
}
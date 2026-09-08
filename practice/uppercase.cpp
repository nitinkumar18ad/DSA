#include<iostream>
using namespace std;

int upper(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"upperCase";
    }
    else if(ch >= 'a' && ch <= 'z'){
        cout<<"lowerCase";
    }
    else{
        cout<<"other";
    }
        
        
}

int main(){
    char ch;
    cin>>ch;

    upper(ch);

    return 0;
}
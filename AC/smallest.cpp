#include<iostream>
#include<climits>
using namespace std;

int main(){
    // int marks[] = {9,3,7,1,5};
    // int smallest = INT_MAX;
    // int size = 5;

    // for(int i = 0;i<size;i++){
    //     if(marks[i]<smallest){
    //         smallest = marks[i];
    //     }
        
    // }
    // cout<<smallest<<endl;


    int marks[] = {9,3,7,1,5};
    int largest = INT_MIN;
    int size = 5;

    for(int i = 0;i<size;i++){
        if(marks[i]>largest){
            largest = marks[i];
        }
        
    }
    cout<<largest<<endl;
    
    return 0;
}
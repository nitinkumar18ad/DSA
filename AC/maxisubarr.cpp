#include<iostream>
using namespace std;

int main(){
    int arr[] = {8,9,7,5,1,2};
    int size = 6;

    for(int st = 0;st<size;st++){
        for(int end = st;end<size;end++){
            for(int i = st;i<end;i++){
                cout<<i;
            }

            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
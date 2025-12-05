#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={4,5,-5,6,65,8,-6,5,0,98};

    cout<<"Entrer the to be searched"<<endl;
    int key;
    cin>>key;

    bool found = search (arr,10,key);
    
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
    return 0;

}
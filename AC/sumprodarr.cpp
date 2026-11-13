#include<iostream>
using namespace std;

int sumof(int arr[],int size){
    int sum = 0;
    for(int i = 0;i<size;i++){
    sum += arr[i];
    }
    return sum;

}

int productof(int arr[],int size){
    int product = 1;
    for(int i = 0;i<size;i++){
        product *= arr[i];
    }

    return product;
}

int main(){
    int arr[] = {5,0,9,8,2,7};
    int size = 6;

    cout<<"sum:"<<sumof(arr,size)<<endl;

    cout<<"Product:"<<productof(arr,size);

    return 0;
}
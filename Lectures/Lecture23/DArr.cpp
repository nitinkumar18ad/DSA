#include<iostream>
using namespace std;

//Row wise Sum
void printSum(int arr[][3],int i ,int j){
    cout<<"Pinting Sum ->"<<endl;
    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum+= arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

//Column wise Sum
void pintColSum(int arr[][3],int i,int j ){
    cout<<"Pinting Sum ->"<<endl;
    for(int j=0;j<3;j++){
        int sum = 0;
        for(int i=0;i<3;i++){
            sum+= arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

bool isPresent (int arr[][3],int target,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(arr[i][j]==target){
            return 1;
           }
        }
    }
    return 0;
}

int largestRowSum(int arr[][3], int i,int j){
    int maxi =  -99935485;
    int rowIndex = -1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            rowIndex = i;
        }
    }

    cout <<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}

int main(){

int arr[3][3];
//int arr[3][3]={1,2,3,4,5,6,7,8,9}
//int arr[3][3]={{1,11,111},{2,22,222},{3,33,333}}

//taking input row wise//
cout<<"Enter the elements:";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}


//taking input column wise//
// cout<<"Enter the elements:";
// for(int j=0;j<3;j++){
//     for(int i=0;i<3;i++){
//         cin>>arr[i][j];
//     }
// }

cout<<"Elements are:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<"Enter element to be searched:"<<endl;
int target;
cin>>target;

if(isPresent(arr,target,3,3)){
    cout<<"Element found"<<endl;
}
else{
    cout<<"Not found"<<endl;
}

printSum(arr,3,3);
cout<<endl;
pintColSum(arr,3,3);

int ansIndex = largestRowSum(arr,3,3);
cout<<"Max row is at index"<< ansIndex <<endl;

return 0;

}
#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){

    int pivot =arr[s];

    int cnt=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    //Place pivot element at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right part of pivot 
    int i=s, j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<= pivot){
            i++;
        }

        while(arr[j]> pivot){
           j--;
        }

        if(i< pivotIndex && j> pivotIndex){
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {

    //Base Case
    if(s>e){
        return;
    }

    //Partition of arr
    int p = partition(arr, s, e);

    //Left part Sorting
    quickSort(arr,s,p-1);

    //Right part Sorting
    quickSort(arr,p+1 , e);

};

int main()
{
    int arr[5] = {5, 3, 9, 6, 2};
    int n = 5;

    cout << "sorted array:" << endl;
    

    quickSort(arr, 0, n - 1);
    

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    };

    return 0;
}
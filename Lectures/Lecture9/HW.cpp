#include<iostream>
using namespace std;

//Print sum of elements in an array
// int main(){
// int n=10;
// int sum =0;
// int arr[10]={1,2,3,4,5,6,7,8,9,10};
// for(int i=0;i<n;i++){
// cout<<arr[i]<<" ";
// }
// cout<<endl;
// for(int i=0;i<n;i++ ){
// sum +=arr[i];
// }
// cout<<"Sum is "<<sum;

// return 0;
// }

//Aternate Swapping
void swapAlternate(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) { // Increment by 2 to skip to the next pair
        swap(arr[i], arr[i + 1]); // Swap current element with the next one
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    cout << "Array before reversing" << endl;
    printArray(arr, 6);
    swapAlternate(arr, 6);
    cout << "Array after reversing" << endl;
    printArray(arr, 6);

    return 0;
}
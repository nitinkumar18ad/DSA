#include <iostream>
using namespace std;

void printArray(int arr[],int size){
     cout << "Printing Arrays" << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
cout<<"Printing Done"<<endl;
}

int main()
{
    int first[5] = {65, 89, 78, 54, 26};
    cout << "value at 3 index is " << first[3] << endl;
    cout << "value at 7 index is " << first[7] << endl;


    int second[4] = {0};
    cout << "value at 3 index is " << second[3] << endl;


    int third[5] = {65, 89};
    cout << "value at 1 index is " << first[1] << endl;
    cout << "value at 7 index is " << first[7] << endl;
    cout << "Printing Arrays" << endl;
    int n;
   printArray(third,4);


    int fourth[10];
    n = 11;
    printArray(fourth,10);
    int fourthSize=sizeof(fourth)/sizeof(int);
    cout<<"Size of Fourth is "<<fourthSize<<endl;

    char arr[5]={'a','b','c','d','e'};
    cout<<arr[3]<<endl;;
    for(char i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    bool one[12];
    double two[20];
    float three[11];

    return 0;
}

#include<iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    //Creating an array of int pointers
    int** jagged = new int*[rows];

    //Define column size for each row
    int* cols = new int[rows];

    //Allocate memory for each row
    for(int i = 0;i<rows;i++){
        cout << "Enter number of elements in row"<<i + 1 <<":";
        cin >> cols[i];
        jagged[i] = new int[cols[i]];

    }

    //Initialize elements
    cout << "\nEnter elements:\n";
    for (int i = 0; i < rows; i++){
        cout << "Row" << i+1 << ":";
        for(int j=0; j<cols[i]; j++){
            cin>>jagged[i][j];
        }
    }

    //Print elements
    cout<<"\nJagged Array:\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols[i]; j++){
            cout << jagged[i][j] << " ";
        }
        cout << endl;
    }

    //Free allocated memory
    for (int i = 0;i<rows ; i++){
        delete [] jagged[i];
    }
    delete[] jagged;
    delete[] cols;

    return 0;
}
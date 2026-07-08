#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void rotate(vector<vector<int>>& matrix){


    //Transpose
    for(int i =0;i<matrix.size();i++){
        for(int j = i+1;j<matrix.size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    //Reverse
        for(int i =0 ;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotate(matrix);

    cout<<"Rotated Matrix:\n";

    for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix[i].size();j++){
            cout<<matrix[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}

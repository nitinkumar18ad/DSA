#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// bool uniqueOccurrences(vector<int>& arr) {
//     unordered_map<int, int> freq;  // To store occurrences of each number

//     // Count occurrences
//     for (int num : arr) {
//         freq[num]++;
//     }

//     unordered_set<int> occurrences;  // To check uniqueness of counts

//     // Check if occurrence counts are unique
//     for (auto pair : freq) {
//         if (!occurrences.insert(pair.second).second) {
//             return false;  // Duplicate occurrence count found
//         }
//     }

//     return true;
// }

// int main() {
//     vector<int> arr = {1, 2, 2, 1, 1, 3};
//     cout << (uniqueOccurrences(arr) ? "true" : "false") << endl;
//     return 0;
// }







// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {  // Renamed function
//         vector<int> result;
        
//         for (int i = 0; i < nums.size(); i++) {
//             int index = abs(nums[i]) - 1; // Convert value to index
            
//             if (nums[index] < 0) {
//                 result.push_back(index + 1); // Duplicate found
//             }
            
//             nums[index] = -nums[index]; // Mark as visited
//         }
        
//         return result;
//     }
// };




#include <bits/stdc++.h>

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to sort the array of 0s, 1s, and 2s
void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
        
    }
  
}


int main() {
    int arr[8] = {1, 2, 0, 2, 0, 1, 0, 1};
    printArray(arr, 8);
    sort012(arr, 8);
    printArray(arr, 8);

    return 0;
}
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Map: number -> frequency
    unordered_map<int, int> freq;

    // This will store how many different numbers
    // appear exactly 2 times
    int count = 0;

    // STEP 1: Store the frequency of every number
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // STEP 2: Traverse the map
    for(auto item : freq) {

        // item.first  = number
        // item.second = frequency

        if(item.second == 2) {
            count++;
        }
    }

    // STEP 3: Print the answer
    cout << count << endl;

    return 0;
}
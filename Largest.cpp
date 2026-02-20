#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int largest(vector<int> &arr)
{
    int n = arr.size();

    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> arr = {10, 20, 4, 45, 99};
    cout << largest(arr);
}
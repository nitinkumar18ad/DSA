#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minEating(vector<int>& piles,int h){
    int low = 1;
    int high = *max_element(piles.begin(),piles.end());

    while (low <= high){
        int mid = low + (high-low)/2;
        long long hours = 0;

        for(int x:piles){
            hours += (x + mid-1)/mid;

        if(hours <= h)
            high = mid - 1;
        else
            low = mid + 1;
        }
        return low;
    }
}

int main() {
    int n, h;
    cin >> n;

    vector<int> piles(n);
    for (int i = 0; i<n; i++)
        cin >> piles[i];

    cin >> h;
    
    cout << minEating(piles, h);

    return 0;
}
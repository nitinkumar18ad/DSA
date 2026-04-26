#include <iostream>
#include <vector>
using namespace std;


//BruteForce
vector<int> divisor(int n)
{
    vector<int> ans;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

//Optimal


int main()
{
    int n;
    cout << "Enter the value:";
    cin >> n;
    vector<int> res = divisor(n);

    for (int x : res)
    {
        cout << x << " ";
    }
}
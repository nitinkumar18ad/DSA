#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


//BruteForce
// vector<int> divisor(int n)
// {
//     vector<int> ans;

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             ans.push_back(i);
//         }
//     }
//     return ans;
// }

//Optimal
vector<int> divisor(int n){
    vector<int> ans;

    for(int i =1;i*i <=n;i++){
        if(n%i == 0){
             ans.push_back(i);
        }

        if(i != n/i){
            ans.push_back(n/i);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;

}


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
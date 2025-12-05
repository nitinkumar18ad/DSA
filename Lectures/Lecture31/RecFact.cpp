#include<iostream>
using namespace std;

int fact(int n){
    if(n ==0){
        return 1;
    }
    int smaller = fact(n-1);;
    int bigger = n*smaller;

    return bigger;
    // return n*fact(n-1);
}

int main() {
    int n;
    cout<< "Enter n:";
    cin>> n;

    int ans = fact(n);

    cout << ans << endl;

    return 0;
}
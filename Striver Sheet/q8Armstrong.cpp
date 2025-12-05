#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int original = n;
    int digits = 0;

    int temp = n;
    while (temp > 0){
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;
    while (temp > 0){
        int digit = temp % 10;
        int power = 1;
        for(int i = 0; i < digits; i++){
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    return sum == original;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(isArmstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}

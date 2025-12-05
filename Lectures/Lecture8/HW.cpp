#include<iostream>
using namespace std;

// Homework
// int main()
// {
//     int amt;
//     cout << "Enter the amount" << endl;
//     cin >> amt;

//     int hundred = 0, fifty = 0, twenty = 0, one = 0;

//     switch (1)
//     {
//     case 1:
//         hundred = amt / 100;
//         amt %= 100;
//     case 2:
//         fifty = amt / 50;
//         amt %= 50;
//     case 3:
//         twenty = amt / 20;
//         amt %= 20;
//     case 4:
//         one = amt / 1;
//         amt %= 1;
//     }
//     if (hundred > 0)
//         cout << "100 Rupee Notes: " << hundred << endl;
//     if (fifty > 0)
//         cout << "50 Rupee Notes: " << fifty << endl;
//     if (twenty > 0)
//         cout << "20 Rupee Notes: " << twenty << endl;
//     if (one > 0)
//         cout << "1 Rupee Notes: " << one << endl;
//     return 0;
// }


//AP
// void am(int n){
//     int Ap = (3*n+7);
//     cout<<"AP is "<<Ap<<endl;
// }
// int main(){
//     cout<<"enter the value of n ";
//     int n;
//     cin>>n;

//     am(n);
//     return 0;

// }


//****Set bits****
// Function to count the number of set bits in a number
// int countSetBits(int n) {
//     int count = 0;
//     while (n > 0) {
//         count += n & 1; // Check if the least significant bit is 1
//         n >>= 1;        // Right-shift the number to check the next bit
//     }
//     return count;
// }

// int main() {
//     int num1, num2;

//     // Input two numbers
//     cout << "Enter the first number: ";
//     cin >> num1;
//     cout << "Enter the second number: ";
//     cin >> num2;

//     // Count set bits for both numbers
//     countSetBits(num1);
//     countSetBits(num2);

//     // Output the results
//     cout << "Number of set bits in " << num1 << " is: " << countSetBits(num1) << endl;
//     cout << "Number of set bits in " << num2 << " is: " << countSetBits(num2) << endl;

//     cout << "Total number of set bits in " << num1+num2 << " is: " << countSetBits(num1)+countSetBits(num2) << endl;

//     return 0;
// }

//fibonacci
    int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int a = 0;
    int b = 1;
    cout<< a <<" "<< b <<" ";
    for(int i = 1;i <= n;i++) {
        int NextNumber = a + b ;
        cout<< NextNumber <<" ";
        a = b;
        b = NextNumber;
    }
    return 0;
 }
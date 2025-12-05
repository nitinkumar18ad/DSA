#include <iostream>
using namespace std;

void printNumber(int num) {
    cout <<"output is:"<< num;
}

int main() {
    int input;
    cout <<"Please enter a number: ";
    cin >>input;
    printNumber(input);
    return 0;
}

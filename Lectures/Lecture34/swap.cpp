#include<iostream>
using namespace std;

void reverse(string& str, int i) {
    int j = str.length()-1-i;

    //base case

    if(i>=j)
    return;

    swap (str[i], str[j]);

    //Recursive call
    reverse(str,i+1);
}

int main() {
    cout << "Enter word " << endl;
    string name;
    cin >> name;
    

    reverse(name,0);
    cout << name << endl;

    return 0;
}
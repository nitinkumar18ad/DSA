#include<iostream>
#include<unordered_map>

using namespace std;

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "aabbcdd";

    unordered_map<char, int> freq;

    for (int i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }

    for (auto it : freq) {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}
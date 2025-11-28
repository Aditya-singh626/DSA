#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string words[] = {"apple", "banana", "apple", "orange", "banana", "apple"};
    map<string, int> freq;

    for (string w : words) {
        freq[w]++;  // counts frequency
    }

    for (auto &p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }
}
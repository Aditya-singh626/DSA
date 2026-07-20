#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
    vector<string> letters;
    char c1 = 'x';
    char c2 = 'y';

    letters.push_back(string(1, c1)); // "x"
    letters.push_back(string(1, c2)); // "y"
    letters.push_back(string(1, c1)+c2); // "xy"

    for (int i = 0; i < letters.size(); i++) {
        cout << letters[i] << ",";
    }
    // output: x,y,xy,
}
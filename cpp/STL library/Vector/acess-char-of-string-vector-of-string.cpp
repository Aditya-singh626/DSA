#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> words = {"hello", "world", "copilot"};

    // Access the 2nd string ("world") and its 3rd character ('r')
    char ch = words[1][2];  

    cout << "Character: " << ch << endl;  // Output: r
    return 0;
}
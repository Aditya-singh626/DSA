#include <iostream>
#include <string>
using namespace std;

void printStringChars(string s) {
    cout << "Accessing characters using string indexing:\n";
    for (int i = 0; i < s.size(); i++) {
        cout << "s[" << i << "] = " << s[i] << endl;
    }
}

int main() {
    string str = "Aditya";
    printStringChars(str);
    return 0;
}
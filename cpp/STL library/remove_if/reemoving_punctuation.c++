#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string text = "Hello, world! This is a test.";

    auto newEnd = remove_if(text.begin(), text.end(), [](unsigned char ch) {
        return ispunct(ch);   // remove punctuation
    });

    text.erase(newEnd, text.end());

    cout << text << endl;
}
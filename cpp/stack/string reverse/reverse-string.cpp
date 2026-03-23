#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverse_string_using_stack(const string& s) {
    stack<char> st;
    // Push all characters onto the stack
    for (char c : s) {
        st.push(c);
    }
    string reversed_str = "";
    // Pop all characters from the stack
    while (!st.empty()) {
        reversed_str += st.top();
        st.pop();
    }
    return reversed_str;
}

int main() {
    string input_str = "hello world";
    cout << "Original String: " << input_str << endl;
    cout << "Reversed String: " << reverse_string_using_stack(input_str) << endl;
    return 0;
}

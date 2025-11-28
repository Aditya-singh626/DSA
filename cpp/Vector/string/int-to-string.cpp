#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num = 12345;
    string s = to_string(num);
    cout << "Digits: " << s.size() << endl; // Output: 5
}
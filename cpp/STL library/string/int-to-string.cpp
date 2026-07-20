#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num = 12345;
    string s = to_string(num);
    int nums = stoi(s); 
    cout << "Digits: " << s.size() << endl; // Output: 5
}
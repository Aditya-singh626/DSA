#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Value: " << x << endl;
    cout << "Address: " << &x << endl;  // prints address in hex
    return 0;                           //- 0x7ffee4b8c8ac is the memory address of variable x.
                                        //- The 0x prefix means the number is in hexadecimal
}
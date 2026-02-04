#include <iostream>
using namespace std;

int main() {
    int arr[5]; // static allocation on stack
    for (int i = 0; i < 5; i++) arr[i] = i+1;

    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    // memory freed automatically when main ends
}
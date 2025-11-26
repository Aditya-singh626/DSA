#include <iostream>
#include <vector>
using namespace std;

// Function to demonstrate push_back
void demonstratePush(vector<int>& arr, int value) {
    cout << "Pushing " << value << " into vector...\n";
    arr.push_back(value); // adds element at the end
    cout << "Current vector: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
}

// Function to demonstrate pop_back
void demonstratePop(vector<int>& arr) {
    if (!arr.empty()) {
        cout << "Popping last element (" << arr.back() << ") from vector...\n";
        arr.pop_back(); // removes last element
    } else {
        cout << "Vector is empty, nothing to pop!\n";
    }
    cout << "Current vector: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
}

int main() {
    vector<int> arr;

    // Demonstrate push
    demonstratePush(arr, 10);
    demonstratePush(arr, 20);
    demonstratePush(arr, 30);

    // Demonstrate pop
    demonstratePop(arr);
    demonstratePop(arr);
    demonstratePop(arr);
    demonstratePop(arr); // extra pop to show empty case
    
    return 0;
}
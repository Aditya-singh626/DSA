#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;  
    cout << "Initially: " << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // Add elements
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
        cout << "After push_back(" << i << "): Size = " << v.size() << ", Capacity = " << v.capacity() << endl;
    }

    // Remove elements
    for (int i = 0; i < 5; ++i) {
        v.pop_back();
        cout << "After pop_back: Size = " << v.size() << ", Capacity = " << v.capacity() << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;  
    cout << "Initially: " << endl;
    cout << "Size: " << v.size() << endl;//.size()	Number of elements currently in the vector
    cout << "Capacity: " << v.capacity() << endl; //.capacity()	Total number of elements that can be held in currently allocated storage

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

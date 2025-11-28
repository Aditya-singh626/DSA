#include <iostream>
#include <utility> // for std::pair
using namespace std;
int main() {
    // Creating a pair of int and string
    pair<int,string> p1;
    p1.first = 1;
    p1.second = "Hello";

    // Initializing a pair directly
    pair<int, double> p2(2, 3.14);

    // Using make_pair
    auto p3 = make_pair('A', 100);

    // Output pairs
    cout << "p1: (" << p1.first << ", " << p1.second << ")\n";
    cout << "p2: (" << p2.first << ", " << p2.second << ")\n";
    cout << "p3: (" << p3.first << ", " << p3.second << ")\n";

    return 0;
}
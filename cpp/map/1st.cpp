#include <iostream>
#include <map>
using namespace std;

int main() {
    // map<key_type, value_type>
    map<int, string> student;

    // Insert elements
    student[1] = "Aditya";
    student[2] = "Ravi";
    student[3] = "Neha";

    // Traversing map
    for (auto it : student) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
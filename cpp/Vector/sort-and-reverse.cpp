#include <vector>
#include <algorithm> // for sort
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 3};
    sort(v.begin(), v.end()); // sorts in ascending order

    // for (int x : v) {
    //     cout << x << " ";
    // }
    
    for (size_t i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";}

 // reverses the vector
    reverse(v.begin(), v.end());
    for (size_t i = 0; i < v.size(); ++i) { 
     cout << v[i] << " ";}
    // Output: 1 2 3 5 8
    return 0;
}

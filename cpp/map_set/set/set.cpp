#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 3, 6, 2, 1};
    unordered_set<int> car(arr.begin(), arr.end());
    // Print unique elements
    for (auto x : car)
        cout << x << " ";
    return 0;
}
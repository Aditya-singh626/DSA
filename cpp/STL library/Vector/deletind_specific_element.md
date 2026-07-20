1. Delete by Index
If you know the position of the element:

Cpp

Copy code
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    int indexToRemove = 2; // Remove element at index 2 (value 30)

    if (indexToRemove >= 0 && indexToRemove < v.size()) {
        v.erase(v.begin() + indexToRemove);
    }

    cout << "After deletion: ";
    for (int num : v) cout << num << " ";
}
Output:


Copy code
After deletion: 10 20 40 50
2. Delete by Value
If you know the value but not the index:

Cpp

Copy code
#include <iostream>
#include <vector>
#include <algorithm> // for remove()

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 30, 50};

    int valueToRemove = 30;

    // Remove all occurrences of 30
    v.erase(remove(v.begin(), v.end(), valueToRemove), v.end());

    cout << "After deletion: ";
    for (int num : v) cout << num << " ";
}
Output:


Copy code
After deletion: 10 20 40 50
3. Delete with a Condition
You can remove elements based on a condition using remove_if:

Cpp

Copy code
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 12, 7, 20, 3};

    // Remove all elements greater than 10
    v.erase(remove_if(v.begin(), v.end(), [](int x) { return x > 10; }), v.end());

    cout << "After deletion: ";
    for (int num : v) cout << num << " ";
}
Output:


Copy code
After deletion: 5 7 3
🔹 Key Notes:
erase() shifts elements after the removed one, so indexes change.
Removing elements from the middle of a vector is O(n) because of shifting.
If you need frequent deletions, consider std::list or std::deque.
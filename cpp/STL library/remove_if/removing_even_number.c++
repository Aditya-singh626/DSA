#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    auto newEnd = remove_if(v.begin(), v.end(), [](int x)
                            {
                                return x % 2 == 0; // remove evens
                            });

    v.erase(newEnd, v.end()); // erase-remove idiom

    for (int i : v)
        cout << i << " ";
}

/*
1. Include headers
#include <iostream>
#include <vector>
#include <algorithm>


- <iostream> → for input/output (cout).
- <vector> → using std::vector.
- <algorithm> → gives access to std::remove_if.

2. Define main function
int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};


- Creates a vector v with numbers 1 through 6.

3. Call remove_if
auto newEnd = remove_if(v.begin(), v.end(), [](int x) {
    return x % 2 == 0;
});


- remove_if takes:
- v.begin(), v.end() → the range of elements.
- A lambda function [](int x){ return x % 2 == 0; } → returns true if x is even.
- Meaning: "Mark all even numbers for removal."
- Internally, remove_if shifts all odd numbers to the front and returns an iterator (newEnd) pointing to 
  the new logical end of valid elements.
At this point, the vector looks like:
v = {1, 3, 5, ?, ?, ?}


The ? are leftover values (garbage) that are still in memory but logically ignored.

4. Erase the garbage
v.erase(newEnd, v.end());


- Actually deletes the unwanted trailing elements from the vector.
- Now the vector truly contains only {1, 3, 5}.

5. Print the result
for (int i : v) cout << i << " ";


- Loops through the vector and prints each element.
- Output:
1 3 5



🔑 Key Idea
- remove_if does not shrink the container; it only rearranges elements.
- You must call .erase() to physically remove them.
- This is known as the erase-remove idiom in C++.
*/
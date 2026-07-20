#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // map find example
    map<char, int> myMap;
    myMap['a'] = 1;
    myMap['b'] = 2;

    char stopCharMap = 'b';
    auto itMap = myMap.find(stopCharMap);

    if (itMap != myMap.end())
    {
        cout << "Found: key = " << itMap->first
             << ", value = " << itMap->second << endl;
    }
    else
    {
        cout << "Key not found!" << endl;
    }
    // string find example
    string input = "hello world";
    char stopCharStr = 'o';
    size_t pos = input.find(stopCharStr);

    if (pos != string::npos)
    {
        cout << "Found at position: " << pos << endl;
    }
    else
    {
        cout << "Character not found!" << endl;
    }

    // vector find example
    vector<int> myVector = {1, 2, 3, 4, 5};
    int stopValue = 3;
    auto itVec = find(myVector.begin(), myVector.end(), stopValue);

    if (itVec != myVector.end())
    {
        cout << "Found: " << *itVec << endl;
    }
    else
    {
        cout << "Value not found!" << endl;
    }
    { /*
        std::map::find
        - Purpose: Searches for a key in the map.
        - Return type: An iterator pointing to the element if found, or map.end() if not found.
        - Check existence: You don’t compare against npos here. Instead, you check if the returned iterator equals map.end()
        std::string::find
        - Purpose: Searches for a character or substring in a string.
        - Return type: The index of the first occurrence if found, or string::npos if not found.
        - Check existence: You compare the returned index against string::npos to determine if the character was found.
        std::find (for vectors)
        - Purpose: Searches for a value in a range (like a vector).
        - Return type: An iterator pointing to the element if found, or the end iterator if not found.
        - Check existence: Similar to map.find, you check if the returned iterator equals the end iterator of the range.

        In summary:
        - map.find returns an iterator, and you check if it equals map.end() to determine if the key exists.
        - string.find returns an index, and you check if it equals string::npos to determine if the character exists.
        - std::find returns an iterator, and you check if it equals the end iterator to determine if the value exists.

      */
    }

    return 0;
}

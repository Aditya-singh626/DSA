#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

// Function returns a tuple (i, j, foundFlag)
tuple<int, int, bool> twosum(vector<int> &arr, int target)
{   
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return make_tuple(i, j, true); // return indices + found flag
            }
        }
    }
    return make_tuple(-1, -1, false); // if not found
}

int main()
{
    int n;
    cout << "ENTER SIZE OF ARRAY:" << endl;
    cin >> n;
    vector<int> arr(n);

    cout << "ENTER ELEMENTS:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "ENTER TARGET VALUE:" << endl;
    cin >> target;

    // Get tuple result
    auto [i, j, found] = twosum(arr, target); // structured binding (C++17+)

    if (found)
    {
        cout << "INDICES FOUND: " << i << " " << j << endl;
    }
    else
    {
        cout << "NO INDICES FOUND" << endl;
    }
}
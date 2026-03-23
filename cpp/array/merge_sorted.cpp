#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, r;
    cout << "Enter the size of array 1\n";
    cin >> n;
    vector<int> v1(n);  // Resize to n
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    cout << "Enter the size of array 2\n";
    cin >> r;
    vector<int> v2(r);  // Resize to r
    for (int i = 0; i < r; i++)
    {
        cin >> v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<int> v3(n + r);  // Resize for combined size

    // Copy elements of v1 into v3
    for (int i = 0; i < n; i++)
    {
        v3[i] = v1[i];
    }

    // Copy elements of v2 into v3 after v1's elements
    for (int i = 0; i < r; i++)
    {
        v3[i + n] = v2[i];
    }

    // Optional: sort combined vector v3 if needed
    // sort(v3.begin(), v3.end());

    for (size_t i = 0; i < v3.size(); ++i)
    {
        cout << v3[i] << " ";
    }

    return 0;
}
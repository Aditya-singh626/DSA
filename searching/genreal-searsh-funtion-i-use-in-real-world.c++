#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void shearch(vector<int> &vec, int key)
{
    vector<int> indices;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == key)
        {
            indices.push_back(i);
        }
    }
    if (indices.size() > 1)
    {
        cout << "Element " << key << " found " << indices.size() << " times at indices: ";
        for (int i = 0; i < indices.size(); i++)
        {
            cout << indices[i];
            if (i < indices.size() - 1)
                cout << ", ";
        }
        cout << endl;
    }
    else if (indices.size() == 1)
    {
        cout << "Element found at index: " << indices[0] << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}
int main()
{
    cout << "Enter number of elements in vector: ";
    int n;
    cin >> n;
    vector<int> vec(n);
    cout << "Enter" << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    cout << "Enter element to search: ";
    int key;
    cin >> key;
    shearch(vec, key);
    return 0;
}
// Bubble sort implementation using a function
#include <iostream>
#include <vector>

using namespace std;

// Sorts the vector in ascending order using bubble sort
void bubbleSort(vector<int> &a)
{
    int n = (int)a.size();
    if (n < 2)
        return;
    for (int i = 0; i < n - 1; ++i)
    {
        bool swapped = false;
        // Last i elements are already in place
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, break
        if (!swapped)
            break;
    }
}

void printVector(const vector<int> &a)
{
    for (int x : a)
        cout << x << ' ';
    cout << '\n';
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0)
    {
        cout << "Invalid size\n";
        return 1;
    }
    vector<int> arr(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Before sorting:\n";
    printVector(arr);

    bubbleSort(arr);

    cout << "After sorting:\n";
    printVector(arr);
    return 0;
}

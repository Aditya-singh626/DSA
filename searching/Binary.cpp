#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // not found
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 25;

    int result = binarySearch(arr, n, key);
    cout << "Binary search" << endl;
    cout << "arr :5, 10, 15, 20, 25, 30, 35, 40 " << endl;
    cout << "Element to find : 25" << endl;
    if (result != -1)
        cout << "Element " << key << " found at index " << result << endl;
    else
        cout << "Element " << key << " not found" << endl;

    return 0;
}
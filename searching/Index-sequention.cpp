#include <iostream>
using namespace std;

int indexedSequentialSearch(int arr[], int n, int key, int blockSize)
{
    // Step 1: Build index table
    int indexCount = (n + blockSize - 1) / blockSize;
    int indexTable[indexCount];

    for (int i = 0; i < indexCount; i++)
    {
        int end = min((i + 1) * blockSize - 1, n - 1);
        indexTable[i] = arr[end]; // store last element of each block
    }

    // Step 2: Find block using index table
    int block = -1;
    for (int i = 0; i < indexCount; i++)
    {
        if (key <= indexTable[i])
        {
            block = i;
            break;
        }
    }

    if (block == -1)
        return -1; // key larger than all blocks

    // Step 3: Sequential search inside block
    int start = block * blockSize;
    int end = min((block + 1) * blockSize, n);

    for (int i = start; i < end; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1; // not found
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30, 35, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 25;
    int blockSize = 3; // size of each block

    int result = indexedSequentialSearch(arr, n, key, blockSize);
    cout << "Index-Sequention-search" << endl;
    cout << "arr :5, 10, 15, 20, 25, 30, 35, 40 " << endl;
    cout << "Element to find : 25" << endl;
    if (result != -1)
        cout << "Element " << key << " found at index " << result << endl;
    else
        cout << "Element " << key << " not found" << endl;

    return 0;
}
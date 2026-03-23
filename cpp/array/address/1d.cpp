#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,c;
    cout << "Number of row you want in your array:";
    cin >> n;
    cout << "Number of colume you want in your array:";
    cin >> c;
    vector<int> arr(n);
    cout << "Enter the element you want in your array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }



    
    int baseAddress = (int)&arr[0]; // Base address of the array
    int index;                      // Index of the element to find
    cout << "Enter the index you wnat address:";
    cin >> index;
    int elementSize = sizeof(arr[0]); // Size of each element in bytes

    // Calculate the address of the element at the given index
    int address = baseAddress + (index * elementSize);

    cout << "Base Address: " << baseAddress << endl;
    cout << "Address of element at index " << index << ": " << address << endl;

    return 0;
}

#include <iostream>
using namespace std;

class Deep
{
public:
    int *arr;
    int size;

    Deep(int s) : size(s)
    {
        arr = new int[size];
        for (int i = 0; i < size; i++)
            arr[i] = i + 1;
    }

    // Deep copy constructor
    Deep(const Deep &source) : size(source.size)
    {
        arr = new int[size];
        for (int i = 0; i < size; i++)
            arr[i] = source.arr[i];
    }

    ~Deep() { delete[] arr; }
};

int main()
{
    Deep obj1(3);
    Deep obj2 = obj1; // deep copy

    obj2.arr[0] = 99;

    cout << "obj1.arr[0] = " << obj1.arr[0] << endl; // prints 1
    cout << "obj2.arr[0] = " << obj2.arr[0] << endl; // prints 99
}
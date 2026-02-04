#include <iostream>
using namespace std;

class Shallow
{
    int *data; // pointer to dynamically allocated memory
public:
    Shallow(int val)
    {
        data = new int; // Here data pointer in pointing to new memoy location which is created in heap and its type is int .
        *data = val;    // or data = new int(val);
    }
    // Default copy constructor → shallow copy
    void show() { cout << *data << endl; }
    ~Shallow() { delete data; } // destructor to free memory
};

int main()
{
    Shallow obj1(10);
    Shallow obj2 = obj1; // shallow copy

    obj2.show(); // prints 10
    // When obj1 and obj2 go out of scope, both try to delete the same memory → crash!
}
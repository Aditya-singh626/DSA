#include <iostream>
using namespace std;
void increment(int *ptr)
{
    (*ptr)++;
}
int main()
{
    int *p;    // pointer to int
    char *c;   // pointer to char
    double *d; // pointer to double

    int x = 10;
    int *p = &x; // p stores address of x
    cout << *p;  // dereference → prints 10
    cout << p;

    int arr[3] = {10, 20, 30};
    int *p = arr;     // points to arr[0]
    cout << *(p + 1); // prints 20

    int x = 5;
    increment(&x);
    cout << x; // prints 6

    int *p = new int(10); // allocate memory
    cout << *p;           // prints 10
    delete p;             // free memory

    int *p;
    int x = 42;
    p = &x;
    cout << "Value of x: " << *p << endl;  // dereferencing pointer to get value
    cout << "Address of x: " << p << endl; // printing address stored in pointer
    int **t;
    t = &p;
    cout << " address of p : " << t << endl;
    cout << " Value of *t : " << *t << endl;
    cout << " Value of x using double pointer dereferencing (**t): " << **t << endl;

    return 0;
}
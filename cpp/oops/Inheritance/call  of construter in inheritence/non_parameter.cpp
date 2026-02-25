#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent default constructor\n";
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child constructor\n";
    }
};

int main()
{
    Child obj;
}
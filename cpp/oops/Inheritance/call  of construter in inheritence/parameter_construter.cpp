#include <iostream>
using namespace std;
class person
{
public:
    string name;
    int age;
    person(string n, int a)
    {
        this->name = n;
        this->age = a;
    }
};
class student : public person
{
public:
    int rollno;
    student(string n, int a, int r) : person(n, a) // calling the parameterized constructor of the base class
                                                   // by pass this value to the constructor of the base class
    {
        this->rollno = r;
    }
    
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};
int main()
{
    return 0;
}
#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    // Constructor 1: No parameters
    Student()
    {
        name = "Unknown";
        age = 0;
    }

    // Constructor 2: One parameter
    Student(string n)
    {
        name = n;
        age = 0;
    }

    // Constructor 3: Two parameters
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Student s1;               // Calls Constructor 1
    Student s2("Aditya");     // Calls Constructor 2
    Student s3("Aditya", 22); // Calls Constructor 3

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
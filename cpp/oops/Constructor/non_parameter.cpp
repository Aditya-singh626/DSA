#include <iostream>
#include <string>
using namespace std;
class teacher
{
private:
    double salary;

public:
    teacher() //  Non- paramter constructor
    {
        cout << "Teacher object created!" << endl;
    }

    string name;
    string subject;
    string dept;

    void changeDept(string newDept)
    {
        dept = newDept;
    }
};

int main()
{
    teacher t1; // construter calling
    teacher t2;
    teacher t3;
    t1.name = "Anjali";
    t1.subject = "Maths";
    return 0;
}
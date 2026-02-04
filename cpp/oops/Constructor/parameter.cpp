#include <iostream>
#include <string>
using namespace std;
class teacher
{
private:
    double salary;

public:
    teacher(string name, string subject, string dept) // paramter constructor
    {
        this->name = name;
        this->subject = subject;
        this->dept = dept;
    }
    // proerty or attribute
    string name;
    string subject;
    string dept;
    void getInfo()
    {
        cout << "Name: " << name << ", Subject: " << subject << ", Dept: " << dept << endl;
    }
};

int main()
{
    teacher t1("Anjali", "Maths", "Science");
    teacher t2("Rahul", "Physics", "Science");
    teacher t3("Priya", "Chemistry", "Science");
    return 0;
}
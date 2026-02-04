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
    //copy construter
    teacher(teacher &originalObj){//pass by refrence

        this->name = originalObj.name+" copy";
        this->subject = originalObj.subject;
        this->dept = originalObj.dept;
        this->salary = originalObj.salary;
    };
      
    // proerty / attribute
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
    teacher t2(t1); //  created  Copy constructor  it use deep copy .
    teacher t3 = t1; //  created  Copy constructor  it use deep copy .
    t3.name = "Raj"; // change name of t3
    t1.getInfo();   // Display original object's info
    t2.getInfo();   // Display copied object's info
    return 0;
}
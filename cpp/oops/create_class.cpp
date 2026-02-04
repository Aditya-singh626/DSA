#include <iostream>
#include <string>
using namespace std;
class teacher
{
private:
    double salary;

public:
    // - attributes or properties or data members
    string name;
    string subject;
    string dept;

    // method / member funtion
    void changeDept(string newDept)
    {
        this->dept = newDept; // using 'this' pointer to refer to the current property  "dept".g
    }

    // setter (To set the value of private property)
    void setSalary(double sal)
    {
        this->salary = sal;
    }

    // getter (To get the value of private property)
    double getSalary()
    {
        return salary;
    }
};

class Accountant
{
private:
    double balance;
    int password;

public:
    string username;
    void setPassword(int pwd)
    {
        password = pwd;
    }
};

int main()
{
    teacher t1; // construter calling
    teacher t2;
    teacher t3;
    t1.name = "Anjali";
    t1.subject = "Maths";
    Accountant acc;
    acc.username = "acc_01";
    acc.setPassword(1234);
    // acc.password = 5678; // Error: 'password' is private within this context
    return 0;
}
#include <iostream>
using namespace std;
class person
{

private:
    int amount;
public:
    string name;
    int age;
    person(string n, int a,int amount)
    {
        this->name = n;
        this->age = a;
        this->amount = amount;
    }
};
class student : public person
{
public:
    int rollno;
    student(string n, int a, int r,int amount) : person(n, a,amount) // calling the parameterized constructor of the base class
                                                   // by pass this value to the constructor of the base class
    {
        this->rollno = r;
    }
    
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
        //cout << "Amount: " << amount << endl;//as this is private member of the base class 
                                             //we cannot access it directly in the derived class so we will get an error here
    }
};
int main()
{
    student s("Aditya", 20, 101, 5000);
    s.display();
    return 0;
}
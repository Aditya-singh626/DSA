#include <iostream>
using namespace std;

class student
{
public:
    double *cgpa;
    string name;
    student(string name, double cp) // paramter construter
    {
        this->name = name;
        cgpa = new double;
        *cgpa = cp;
    }

    //  as it is a created  copy constructor it will perform deep copy
    student(const student &s)
    {
        this->name = s.name;
        this->cgpa = new double; // allocate new memory for cgpa
        *(this->cgpa) = *(s.cgpa); // copy the value of cgpa
    };
    ~student() { delete cgpa; } // created destruter by me because the compiler destruter do not delete the memory allocated iin heap.
                                // here delete does not mean we are deleting the pointer cgpa.
                                // we are deleteingis the space it pointing to .  
};

int main()
{
    student s1("raj", 9.5);
    student s2 = s1;                                    // deep copy
    *(s2.cgpa) = 8.5;                                   // Modifying s2's cgpa does not affect s1's cgpa
    cout << s1.name << "'s CGPA: " << *s1.cgpa << "\n"; // prints 9.5
    cout << s2.name << "'s CGPA: " << *s2.cgpa << "\n"; // prints 8.5
    //after this main funtion and we hace to free the space iin heap that cgpa pointer is pointing
}
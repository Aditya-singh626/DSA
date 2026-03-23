#include <iostream>
using namespace std;

class Person {
public:
    void speak() { cout << "Speaking..." << endl; }
};

class Learner {
public:
    void study() { cout << "Studying..." << endl; }
};

class Student : public Person, public Learner {
public:
    void attendClass() { cout << "Attending class..." << endl; }
};

int main() {
    Student s;
    s.speak();
    s.study();
    s.attendClass();
    return 0;
}
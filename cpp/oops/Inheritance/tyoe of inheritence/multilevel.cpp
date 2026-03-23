#include <iostream>
using namespace std;

class Animal {
public:
    void breathe() { cout << "Breathing..." << endl; }
};

class Mammal : public Animal {
public:
    void walk() { cout << "Walking..." << endl; }
};

class Dog : public Mammal {
public:
    void bark() { cout << "Barking..." << endl; }
};

int main() {
    Dog d;
    d.breathe();
    d.walk();
    d.bark();
    return 0;
}
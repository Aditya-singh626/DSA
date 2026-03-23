#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating..." << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Dog barking..." << endl; }
};

class Cat : public Animal {
public:
    void meow() { cout << "Cat meowing..." << endl; }
};

int main() {
    Dog d;
    Cat c;
    d.eat();
    d.bark();
    c.eat();
    c.meow();
    return 0;
}
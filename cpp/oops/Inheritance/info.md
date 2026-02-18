Inheritance is one of the core pillars of Object-Oriented Programming (OOP). It allows a class (called the child class or subclass) to acquire properties and behaviors from another class (called the parent class, superclass, or base class). This promotes code reusability, extensibility, and logical organization.

# 🔑 Key Points About Inheritance

- Parent Class (Base/Superclass): The original class whose features are reused.
- Child Class (Derived/Subclass): The new class that inherits from the parent.
- Code Reusability: You don’t need to rewrite common logic; subclasses can reuse parent methods and attributes.
- Extensibility: Subclasses can add new features or override parent methods to change behavior.
- Hierarchy: Creates a logical relationship between classes (e.g., Animal → Dog, Cat).
  Example

---

#include <iostream>
using namespace std;

class Animal {
public:
void sound() {
cout << "Animal makes a sound" << endl;
}
};

// Dog inherits from Animal
class Dog : public Animal {
public:
void sound() {
cout << "Dog barks" << endl;
}
};

int main() {
Animal a;
Dog d;

    a.sound(); // Output: Animal makes a sound
    d.sound(); // Output: Dog barks

}

---

Here:

- Dog inherits from Animal.
- Dog overrides the sound() method to provide its own behavior.

  # 🔎 What is Inheritance Really Doing?

  Inheritance is a mechanism where a derived class (child) automatically gets:

- Data members (variables) of the base class.
- Member functions (methods) of the base class.
  This means the child class can:
- Reuse existing functionality.
- Extend by adding new members.
- Override to change behavior.
  It’s like building on top of a foundation: you don’t start from scratch, you extend what’s already there.

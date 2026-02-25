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

# construter call in inheritence

In C++ inheritance, constructors are called in a specific sequence when you create an object of a derived (child) class:
🔹 Order of Constructor Calls

- Base class constructor(s) are called first.
- If there are multiple base classes, they are called in the order they appear in the inheritance list.
- Member object constructors (if the derived class contains objects of other classes as members).
- Derived class constructor is called last.
  🔹 Order of Destructor Calls
- The reverse happens during destruction:
- Derived class destructor runs first.
- Then member object destructors.
- Finally, base class destructors.
  example :
  ***
  #include <iostream>
  using namespace std;

class Parent {
public:
Parent() {
cout << "Parent constructor called" << endl;
}
~Parent() {
cout << "Parent destructor called" << endl;
}
};

class Child : public Parent {
public:
Child() {
cout << "Child constructor called" << endl;
}
~Child() {
cout << "Child destructor called" << endl;
}
};

int main() {
Child obj;
return 0;
}

---

# Mode of inheritance 🔎 Explanation
- Private members of the base class are never inherited directly. They are accessible only within the base class itself.
- Protected members:
- If inherited privately, they become private in the derived class.
- If inherited protectedly, they remain protected.
- If inherited publicly, they remain protected.
- Public members:
- If inherited privately, they become private in the derived class.
- If inherited protectedly, they become protected.
- If inherited publicly, they remain public.
- ![alt text](<Screenshot 2026-02-25 142320.png>)
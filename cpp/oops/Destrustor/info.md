In Object-Oriented Programming (OOP), a destructor is a special member function of a class that is automatically invoked when an object goes out of scope or is explicitly deleted. Its main purpose is to free up resources that the object may have acquired during its lifetime, such as memory, file handles, or network connections.
Key Points about Destructors

- Automatic cleanup: Called when an object is destroyed, ensuring no resource leaks.
- Naming: In languages like C++, the destructor has the same name as the class but is preceded by a tilde (~).
  class Wall {
  public:
  ~Wall() {
  // cleanup code
  }
  };
- No return type or parameters: Unlike constructors, destructors cannot take arguments and don’t return values.
- Default destructor: If you don’t define one, the compiler provides a default destructor that does nothing.
- Resource management: Essential when working with dynamic memory allocation (new/delete) or external resources.
- RAII principle: Destructors are central to Resource Acquisition Is Initialization, ensuring resources are tied to object lifetime.
  Example in C++
  #include <iostream>
  using namespace std;

class Demo {
public:
Demo() {
cout << "Constructor called!" << endl;
}
~Demo() {
cout << "Destructor called!" << endl;
}
};

int main() {
Demo obj; // Constructor runs here
} // Destructor runs automatically when obj goes out of scope

👉 In short: constructors build objects, destructors clean them up.
Would you like me to also explain how destructors differ across languages (like C++, Java, and Python)? That comparison can help you see where manual cleanup is needed versus where garbage collection handles it.

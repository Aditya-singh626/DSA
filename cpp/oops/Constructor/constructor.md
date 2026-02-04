## Constructor in OOP (C++)

A constructor is a special member function of a class that is automatically called when an object is created.
Its main job is to initialize (set up) the data members of the class.

Simple Definition (Exam-Ready)

A constructor is a special member function of a class that has the same name as the class and is used to initialize objects automatically at the time of object creation.

# Key Properties of a Constructor (Very Important)

- Same name as class
- No return type (not even void)
- Called automatically
- Used to initialize data members
- Can be overloaded
- memory allocation ( for object not of class) happen when construstor is called

# Why Do We Need a Constructor?

- Without constructor:
  - Data members contain garbage values
  - Programmer must manually initialize values

- With constructor:
  - Object starts in a valid state

  Example 1: Constructor in Action (Basic)
  #include <iostream>  
  using namespace std;

  class Student {
  int roll;
  public:
  Student() { // constructor
  roll = 1;
  }

      void show() {
          cout << "Roll = " << roll;
      }

  };

  int main() {
  Student s; // constructor called automatically
  s.show();
  return 0;
  }

  Output
  Roll = 1

# Types of Constructors in C++

1️⃣ Default Constructor (Non parmeterized construter)

A constructor with no parameters.

class Demo {
public:
Demo() {
cout << "Default constructor called";
}
};

2️⃣ Parameterized Constructor

A constructor with parameters.

class Student {
int roll;
public:
Student(int r) {
roll = r;
}
};

Usage:

Student s1(10);

3️⃣ Copy Constructor

Used to copy one object into another.

class Demo {
int x;
public:
Demo(int a) {
x = a;
}

    Demo(Demo &d) {   // copy constructor
        x = d.x;
    }

};

Usage:

Demo d1(5);
Demo d2 = d1; // copy constructor called

# 🔹 Constructor Overloading in OOP (An example of polymorphism)

Constructor overloading is a concept in Object-Oriented Programming (OOP) where a class can have multiple constructors with different parameter lists.

- A constructor is a special method in a class that is automatically called when an object is created.
- Overloading means defining more than one constructor in the same class, but each must differ in the number or type of parameters.

✨ Key Points

- Same class, multiple constructors.
- Differentiated by parameter list (not return type).
- Helps in flexibility: you can create objects in different ways depending on what data you have.

🟢 Output
Name: Unknown, Age: 0
Name: Aditya, Age: 0
Name: Aditya, Age: 22

⚡ Why Use Constructor Overloading?

- Provides different ways to initialize objects.
- Makes code more readable and flexible.
- Avoids writing multiple initialization functions.

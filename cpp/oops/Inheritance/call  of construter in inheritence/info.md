Great question! In C++ inheritance, the sequence of constructor calls is the same whether you use a parameterized or non-parameterized constructor — but the way you invoke the base class constructor differs.

# 🔹 Non-Parameterized Constructor

If the base class has a default (no-argument) constructor, it is automatically called before the derived class constructor.
class Parent {
public:
Parent() {
cout << "Parent default constructor\n";
}
};

class Child : public Parent {
public:
Child() {
cout << "Child constructor\n";
}
};

int main() {
Child obj;
}

Output:
Parent default constructor
Child constructor

# 🔹 Parameterized Constructor

If the base class does not have a default constructor, you must explicitly call its parameterized constructor using an initializer list in the derived class.
class Parent {
public:
Parent(int x) {
cout << "Parent parameterized constructor: " << x << endl;
}
};

class Child : public Parent {
public:
Child(int y) : Parent(y) { // explicitly call Parent’s constructor
cout << "Child constructor with value: " << y << endl;
}
};

int main() {
Child obj(10);
}

Output:
Parent parameterized constructor: 10
Child constructor with value: 10

# 🔹 Key Points

- Order is always: Base → Derived.
- If the base has a default constructor, it’s called automatically.
- If the base has only parameterized constructors, you must explicitly call one in the derived class’s initializer list.
- If you don’t, the compiler will throw an error because it doesn’t know how to construct the base part of the object.

✅ So the sequence doesn’t change — base first, then derived.
The difference is only in how you invoke the base constructor: automatic for non-parameterized, explicit for parameterized.
Would you like me to also show you how this works with multiple inheritance (where you have to call multiple base constructors in the initializer list)? That’s a neat extension of this concept.

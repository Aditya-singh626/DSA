📚 Pointers in C++

1. Definition

- A pointer is a variable that stores the memory address of another variable.
- Instead of holding a value directly, it points to where the value is stored in memory.

2. Syntax
   datatype\* pointerName;

3. Key Operations

- Address-of (&) → Get the address of a variable.
- Dereference (\*) → Access the value stored at the address.

4. Types of Pointers

- Null Pointer → Points to nothing (nullptr).
- Dangling Pointer → Points to freed/deleted memory.
- Void Pointer → Can point to any data type (void\*).
- Wild Pointer → Uninitialized pointer (dangerous).
- Pointer to Pointer → Stores address of another pointer (int\*\* pp).

5. Pointer Arithmetic

- Works with arrays and memory blocks.
- Operations: p++, p--, p+n, p-n.

6. Pointers and Arrays

- Array name itself acts as a pointer to the first element.
  int arr[3] = {1, 2, 3};
  int* p = arr;
  cout << *p; // prints 1
  cout << \*(p+2); // prints 3

7. Pointers and Functions

- Pass by reference using pointers.
  void increment(int* ptr) {
  (*ptr)++;
  }

int main() {
int x = 5;
increment(&x);
cout << x; // prints 6
}

8. Dynamic Memory Allocation

- Allocate memory at runtime using new and free it using delete.
  int* p = new int(10); // allocate memory
  cout << *p; // prints 10
  delete p; // free memory

9. Why Pointers Are Important

- Efficient function parameter passing (avoid copying large data).
- Enable dynamic memory management.
- Essential for data structures (linked lists, trees, graphs).
- Provide low-level memory control.

🎯 Quick Analogy

- Variable → House 🏠 (stores value).
- Pointer → Address slip 📍 (tells where the house is).
- Dereference (\*) → Visiting the house and checking inside.


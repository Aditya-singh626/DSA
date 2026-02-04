- 🟢 Shallow Copy

* Makes a new object, but only copies the outer shell.
* If the object has pointers or references, both the original and the copy point to the same inner data.
* Effect: Changing the copy also changes the original (because they share the same memory inside).
* Think of it like: Two different remote controls pointing to the same TV.

- 🔵 Deep Copy

* Makes a new object and also copies all the inner data separately.
* The copy has its own memory, independent of the original.
* Effect: Changing the copy does not affect the original.
* Think of it like: Two different remote controls, each with its own TV.

This way, you can remember:

- Shallow = shared inside
- Deep = duplicate inside

* ✅ Conclusion
    You’re right:    
      - Shallow vs deep copy matters only when dynamic memory allocation is involved.
      - For static members, the compiler’s default copy constructor is sufficient because values are copied directly.
      - In constructors, you usually implement deep copy logic only when your class owns heap-allocated resources.

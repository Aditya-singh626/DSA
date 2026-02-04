# 📘 Memory Allocation in C++

- 🔹 Static Memory Allocation (Stack)

* Location: Stack
* When: Compile time (size fixed before program runs)
* Lifetime: Auto‑managed, freed when variable goes out of scope
* Speed: Very fast
* Risk: Stack overflow if too much memory is used
* Example:
  int arr[5]; // allocated on stack

- 🔹 Dynamic Memory Allocation (Heap)

* Location: Heap
* When: Runtime (size decided during execution)
* Lifetime: Manual control → must free using delete or delete[]
* Speed: Slower than stack allocation
* Risk: Memory leaks, fragmentation, dangling pointers
* Example:
  int\* arr = new int[5]; // allocated on heap
  delete[] arr; // manual deallocation

⚡ Comparison Table
![alt text](<Screenshot 2026-02-03 142033.png>)

🧠 Quick Analogy

- Stack = Pre‑reserved seat in a classroom (fixed, auto‑managed).
- Heap = On‑demand booking during class (flexible, but you must cancel later).

This is the kind of concise note you can drop straight into your revision sheet.
Do you want me to also add a one‑liner about shallow vs deep copy here, so you have both memory allocation and copy concepts summarized together?

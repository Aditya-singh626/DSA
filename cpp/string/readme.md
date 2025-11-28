# 1. std::string vs Array in C++

- When you pass a std::string s into a function, it is not the same as a character array (char arr[]).
- But you can access its characters like an array using the [] operator:

# 2. Converting std::string to C-style array

If you specifically want a character array (char\* or char[]), you can use:

- s.c_str() → gives you a const char\* (read-only C-style string).
- strcpy() if you want to copy into a mutable char[].
  Example:
  void func(std::string s) {
  const char\* arr = s.c_str(); // pointer to char array
  std::cout << arr[0]; // first character
  }

# 3. Best Practice

- If you just need to iterate or access characters, stick with std::string and s[i].
- If you need C-style functions (like strlen, strcpy, etc.), then convert using c_str().

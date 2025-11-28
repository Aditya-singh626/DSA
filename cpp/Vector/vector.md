# vector(only for c++)

dynamic array
1-d array
sort
reverce.

# size and capacity in vector

In C++ vectors:

size is the number of elements currently stored in the vector.
capacity is the total number of elements the vector can store before it needs to allocate more memory.
For example, after std::vecstor<int> v(5);, v.size() is 5, but v.capacity() may be 5 or more, depending on how the vector was constructed and how elements were added.

size() tells you how many elements are in the vector.
capacity() tells you how many elements the vector can hold before it needs to grow its internal storage.

# sort

In C++, sort is a function from the <algorithm> header used to arrange the elements of a vector (or any container with random access iterators) in ascending order by default.

# reverse

In C++, reverse is a function from the <algorithm> header that reverses the order of elements in a vector (or any container with random access iterators).

# Push and Pop property of c++

📌 arr.push_back(i) in C++ vectors

- arr → is a vector<int> (a dynamic array of integers).
- push_back(i) → is a method of vector that adds an element to the end of the vector.

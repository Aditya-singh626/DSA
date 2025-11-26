## 🧠 So Which One Should You Use?

- # Use Introsort (sort) when:M

- You want speed and efficiency
- Stability is not required
- You're sorting primitive types or simple structures

- # Use Merge Sort (stable_sort) when:

- You need stable sorting
- You're sorting complex objects (e.g., structs with multiple fields)
- You’re okay with extra memory usage

# 🔢 Radix Sort

- Type: Non-comparative sorting algorithm.
- Method: Sorts numbers digit by digit, starting from the least significant digit to the most significant, using a stable sub-sort like Counting Sort.
- Complexity:
- Best/Average/Worst: O(nk), where n = number of elements, k = number of digits.
- Use Case: Efficient for integers or strings with fixed-length keys.

# 🔀 Merge Sort

- Type: Divide and Conquer.
- Method: Recursively splits the array into halves, sorts each half, then merges them back in sorted order.
- Complexity:
- Best/Average/Worst: O(n\log n).
- Use Case: Stable sort, great for linked lists and large datasets.

# ⚡ Quick Sort

- Type: Divide and Conquer.
- Method: Selects a pivot, partitions the array so smaller elements go left and larger go right, then recursively sorts partitions.
- Complexity:
- Best/Average: O(n\log n).
- Worst: O(n^2) (if pivot choice is poor).
- Use Case: Very fast in practice for arrays; widely used.

# 🌳 Heap Sort

- Type: Comparison-based, uses Binary Heap.
- Method: Builds a max-heap, repeatedly extracts the maximum element, and places it at the end of the array.
- Complexity:
- Best/Average/Worst: O(n\log n).
- Use Case: In-place sorting, no extra memory needed, but not stable.

# 💧 Bubble Sort

- Type: Simple comparison-based.
- Method: Repeatedly swaps adjacent elements if they’re in the wrong order.
- Complexity:
- Best: O(n) (already sorted).
- Average/Worst: O(n^2).
- Use Case: Educational purposes; inefficient for large datasets.

# 🎯 Selection Sort

- Type: Comparison-based.
- Method: Repeatedly selects the smallest element from the unsorted portion and swaps it with the first unsorted element.
- Complexity:
- Best/Average/Worst: O(n^2).
- Use Case: Simple, but inefficient for large datasets.

# 🃏 Insertion Sort

- Type: Comparison-based.
- Method: Builds the sorted array one element at a time by inserting each new element into its correct position.
- Complexity:
- Best: O(n) (already sorted).
- Average/Worst: O(n^2).
- Use Case: Efficient for small datasets or nearly sorted arrays.

- Radix is great for integers.
- Merge and Quick are the most practical for large datasets.
- Heap is memory-efficient.
- Bubble, Selection, Insertion are simple but mainly educational.

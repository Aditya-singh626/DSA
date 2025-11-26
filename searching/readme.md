# 🔍 Binary Search

- Definition: A fast searching algorithm that works only on sorted arrays or lists.
- Method:
- Start with two pointers (low and high).
- Find the middle element (mid).
- Compare the target with arr[mid].
- If equal → found.
- If smaller → search left half.
- If larger → search right half.
- Complexity:
- Best case: O(1) (if found at mid).
- Average/Worst case: O(\log n).
- Use Case: Efficient for large sorted datasets.

# 📄 Sequential (Linear) Search

- Definition: The simplest search method; checks each element one by one.
- Method:
- Start at the first element.
- Compare with the target.
- Continue until found or end of list.
- Complexity:
- Best case: O(1) (if first element matches).
- Worst case: O(n).
- Use Case: Works on unsorted data and small datasets; easy to implement.

# 📑 Indexed Sequential Search

- Definition: A hybrid method combining indexing with sequential search.
- Method:
- Create an index file that divides the dataset into blocks.
- First search the index to locate the block.
- Then perform sequential search within that block.
- Complexity:
- Faster than pure sequential search because fewer elements are scanned.
- Efficiency depends on index size and block division.
- Use Case: Common in databases and large files where full sorting or binary search is impractical.

# ✅ In short:

- Binary search is fastest but requires sorted data.
- Sequential search is simplest but slow for large datasets.
- Indexed sequential search balances speed and flexibility, especially in database systems.
  Would you like me to also show you step-by-step dry runs of each algorithm with a small example array (like [10, 20, 30, 40, 50])? That way you can see how each search progresses.
  Sources:

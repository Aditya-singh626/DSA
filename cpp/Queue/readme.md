# 📄 Linear Queue

- Definition: A basic queue that follows the FIFO (First In First Out) principle.
- Structure:
- Elements are inserted at the rear.
- Elements are removed from the front.
- Limitations: In array implementation, once the rear reaches the end, no more insertions are possible even if there is space at the front.
- Complexity:
- Enqueue: O(1)
- Dequeue: O(1)
- Use Cases: CPU scheduling, buffering, BFS traversal.

# 🔄 Circular Queue

- Definition: An improved version of the linear queue where the last position connects back to the first, forming a circle.
- Structure:
- Uses modulo arithmetic to wrap indices.
- Both enqueue and dequeue operations are efficient.
- Advantages:
- Solves wasted-space problem of linear queues.
- Efficient memory usage.
- Complexity:
- Enqueue: O(1)
- Dequeue: O(1)
- Use Cases: Memory management, buffering in operating systems, handling requests in resource-limited systems.

# ⭐ Priority Queue

- Definition: A queue where each element has a priority value, and elements are served based on priority rather than arrival order.
- Structure:
- Higher priority elements are dequeued first.
- If priorities are equal, FIFO order is followed.
- Implementation:
- Can be implemented using arrays, linked lists, or binary heaps (most efficient).
- Complexity (Heap-based):
- Insertion: O(\log n)
- Deletion (highest priority): O(\log n)
- Use Cases:
- Dijkstra’s shortest path algorithm
- Prim’s minimum spanning tree
- Huffman coding
- Task scheduling in operating systems.

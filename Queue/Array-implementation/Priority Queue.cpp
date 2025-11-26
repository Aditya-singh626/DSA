#include <iostream>
using namespace std;

#define SIZE 10 // maximum size of the priority queue

// Define a structure for each element
struct Element
{
    int value;
    int priority; // smaller number = higher priority
};

// Define the Priority Queue structure
struct PriorityQueue
{
    Element arr[SIZE];
    int count;

    // Constructor
    PriorityQueue()
    {
        count = 0;
    }

    // Check if queue is full
    bool isFull()
    {
        return count == SIZE;
    }

    // Check if queue is empty
    bool isEmpty()
    {
        return count == 0;
    }

    // Insert element into queue
    void enqueue(int value, int priority)
    {
        if (isFull())
        {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        arr[count].value = value;
        arr[count].priority = priority;
        count++;
        cout << value << " enqueued with priority " << priority << endl;
    }

    // Remove element with highest priority (lowest priority number)
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow! Cannot dequeue." << endl;
            return;
        }

        // Find element with highest priority
        int highestPriorityIndex = 0;
        for (int i = 1; i < count; i++)
        {
            if (arr[i].priority < arr[highestPriorityIndex].priority)
            {
                highestPriorityIndex = i;
            }
        }

        cout << arr[highestPriorityIndex].value << " dequeued (priority "
             << arr[highestPriorityIndex].priority << ")" << endl;

        // Shift elements to fill the gap
        for (int i = highestPriorityIndex; i < count - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        count--;
    }

    // Peek element with highest priority
    void peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }

        int highestPriorityIndex = 0;
        for (int i = 1; i < count; i++)
        {
            if (arr[i].priority < arr[highestPriorityIndex].priority)
            {
                highestPriorityIndex = i;
            }
        }

        cout << "Front element: " << arr[highestPriorityIndex].value
             << " (priority " << arr[highestPriorityIndex].priority << ")" << endl;
    }

    // Display all elements
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements (value:priority): ";
        for (int i = 0; i < count; i++)
        {
            cout << arr[i].value << ":" << arr[i].priority << " ";
        }
        cout << endl;
    }
};

int main()
{
    PriorityQueue pq;
    cout << "Priority Queue Operations:" << endl;
    pq.enqueue(10, 2);
    pq.enqueue(20, 1);
    pq.enqueue(30, 3);
    pq.display();

    pq.peek();

    pq.dequeue();
    pq.display();

    pq.dequeue();
    pq.display();

    pq.peek();
    pq.display();

    return 0;
}
#include <iostream>
using namespace std;

#define SIZE 5 // maximum size of the queue

// Define the Queue structure
struct Queue
{
    int arr[SIZE];
    int front;
    int rear;

    // Constructor to initialize
    Queue()
    {
        front = -1;
        rear = -1;
    }

    // Check if queue is full
    bool isFull()
    {
        return rear == SIZE - 1;
    }

    // Check if queue is empty
    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }

    // Insert element into queue
    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        if (front == -1)
            front = 0; // first insertion
        arr[++rear] = value;
        cout << value << " enqueued into queue." << endl;
    }

    // Remove element from queue
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow! Cannot dequeue." << endl;
            return;
        }
        cout << arr[front] << " dequeued from queue." << endl;
        front++;
    }

    // Peek front element
    void peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Front element: " << arr[front] << endl;
    }

    // Display queue elements
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.peek();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // will show overflow
    q.display();

    return 0;
}
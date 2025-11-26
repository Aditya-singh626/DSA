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
        return ((front == 0 && rear == SIZE - 1) || (rear + 1 == front));
    }

    // Check if queue is empty
    bool isEmpty()
    {
        return (front == -1);
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
        { // first insertion
            front = 0;
            rear = 0;
        }
        else
        {
            rear = (rear + 1) % SIZE;
        }
        arr[rear] = value;
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
        if (front == rear)
        {
            // Queue becomes empty
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
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
        int i = front;
        while (true)
        {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
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
    q.enqueue(40);
    q.enqueue(50);
    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    q.enqueue(60);
    q.enqueue(70); // wraps around
    q.display();

    q.peek();

    return 0;
}
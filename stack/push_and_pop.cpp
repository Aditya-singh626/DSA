#include <iostream>
#define MAX 100

class Stack {
    int top;
    int arr[MAX];
public:
    Stack() { top = -1; }

    bool push(int x) {
        if (top >= (MAX - 1)) {
            std::cout << "Stack Overflow\n";
            return false;
        } else {
            arr[++top] = x;
            std::cout << x << " pushed into stack\n";
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            std::cout << "Stack Underflow\n";
            return 0;
        } else {
            int x = arr[top--];
            std::cout << x << " popped from stack\n";
            return x;
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    s.pop();
    return 0;
}
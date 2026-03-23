#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 20

// Global stack structure
struct Stack {
    int numbers[SIZE];
    int position;
} myStack;  // Global variable

// Initialize the stack
void startStack() {
    myStack.position = -1;
}

// Check if stack is empty
int isStackEmpty() {
    return myStack.position == -1;
}

// Push value to stack
void push(int value) {
    if (myStack.position == SIZE - 1) {
        printf("Stack is full!\n");
        exit(1);
    }
    myStack.position++;
    myStack.numbers[myStack.position] = value;
}

// Pop value from stack
int pop() {
    if (isStackEmpty()) {
        printf("Stack is empty!\n");
        exit(1);
    }
    int value = myStack.numbers[myStack.position];
    myStack.position--;
    return value;
}

// Perform operation
int doMath(int first, int second, char sign) {
    switch (sign) {
        case '+': return first + second;
        case '-': return first - second;
        case '*': return first * second;
        case '/': return first / second;
        case '^': return pow(first, second);
        default: return 0;
    }
}

// Evaluate postfix expression
void solvePostfix(char input[]) {
    startStack();  // Initialize global stack

    int i = 0;
    while (input[i] != '\0') {
        char current = input[i];

        if (current >= '0' && current <= '9') {
            push(current - '0');
        } else {
            int second = pop();
            int first = pop();
            int result = doMath(first, second, current);
            push(result);
        }
        i++;
    }

    printf("Answer: %d\n", pop());
}

// Main function
int main() {
    char userInput[50];
    printf("Enter postfix expression: ");
    scanf("%s", userInput);

    solvePostfix(userInput);
    return 0;
}
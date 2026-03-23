#include <stdio.h>
#include <string.h>
#define MAX 100

void reverse_string_using_stack(char *s) {
    char stack[MAX];
    int top = -1;
    int len = strlen(s);

    // Push all characters onto the stack
    for (int i = 0; i < len; i++) {
        stack[++top] = s[i];
    }

    // Pop all characters from the stack back to the string
    for (int i = 0; i < len; i++) {
        s[i] = stack[top--];
    }
}

int main() {
    char input_str[MAX] = "hello world";
    printf("Original String: %s\n", input_str);
    reverse_string_using_stack(input_str);
    printf("Reversed String: %s\n", input_str);
    return 0;
}

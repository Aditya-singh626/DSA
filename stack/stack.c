#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct stack
{
    int top;
    int items[MAX];
} s;
void push(int t)
{
    if(s.top>=MAX-1)
    {
        printf("\n\t Stack is over flow");
    }
    else
    {
        s.top = s.top + 1;
        s.items[s.top]=t;
    }
}
void pop()
{
    if(s.top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",s.items[s.top]);
        s.top--;
    }
}
int main()
{
    // int n;
    // printf("Enter the size of stack:");
    // scanf("%d",&n);
    // struct stack *s = (struct stack *)malloc(n*sizeof(struct stack));
    s.top = -1;
    int n;
    printf("Enter the elements in the stack:\n");
    for (int i = 0; i <  4; i++)
    {
        scanf("%d", &n);
        push(n);
    }
    pop();
    printf("\nThe elements in the stack are:\n");
    for (int i = s.top; i >= 0; i--)
    {
        printf("%d ", s.items[i]);
    }
    return 0;
}
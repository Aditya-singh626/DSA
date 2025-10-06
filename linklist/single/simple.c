#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head, *p, *q;
void count(){
    int count = 0;
    p = head;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    printf("The number of nodes in the linked list is: %d\n", count);
}
int main()
{
    typedef struct Node node;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    head = NULL;
    for (int i = 0; i < n; i++)
    {
        if (head == NULL)
        {
            p = (node *)malloc(sizeof(node)); // p = ... stores this address in the pointer variable p.
                                                // malloc(sizeof(node)) returns the address of a newly allocated memory block.
                                                // p is a pointer, so it is meant to store an address.
                                                // If you wrote &malloc(...), you would be asking for the address of an address, which is not what you want.

            head = p;                         // After you write head = p;, the head pointer has the address of the newly created node.
            printf("Enter data: ");
            scanf("%d", &p->data);
            p->next = NULL;
        }
        else
        {
            q = (node *)malloc(sizeof(node));
            printf("Enter data: ");
            scanf("%d", &q->data);
            q->next = NULL;
            p->next = q;
            p = q;
        }
    }
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("The number of nodes in the linked list is: ");
    count();

    return 0;
}
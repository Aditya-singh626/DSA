#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
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
            p = (node *)malloc(sizeof(node)); 
            head = p;                        
            printf("Enter data: ");
            scanf("%d", &p->data);
           p->next = NULL;
           p->prev = NULL;
        }
        else
        {
            q = (node *)malloc(sizeof(node));
            printf("Enter data: ");
            scanf("%d", &q->data);
            q->next = NULL;
            q->prev=p;
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
    count();

    return 0;
}
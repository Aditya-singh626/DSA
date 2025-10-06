#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node
{
    int data;
    struct Node *next;
} *head, *p, *q;
typedef struct Node node;
void traverse()
{
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void print_alternate_nodes()
{
    bool flag = true;
    p = head;
    while (p != NULL)
    {
        if (flag)
        {
            printf("%d ", p->data);
        }
        flag = !flag; // Flip the value of flag. If it was true, it becomes false; if it was false, it becomes true.
                      // This way, you print every alternate node.
        p = p->next;
    }
    printf("\n");
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
    // print
    traverse();
    printf("\n");
    // alternate linklist
    printf("alternate linked list is::\n");
    print_alternate_nodes();
    printf("\n");
    // print
    traverse();
    printf("\n");
    return 0;
}

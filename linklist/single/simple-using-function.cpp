#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head, *p, *q,*temp;

struct Node *create_node(int data)
{
    temp = (struct Node *)malloc(sizeof(struct Node));
    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void count()
{
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
    int val;
    for (int i = 0; i < n; i++)
    {
        printf("Enter data: ");
        scanf("%d", &val);
        if (head == NULL)
        {
            p = create_node(val);
            head = p;
        }
        else
        {
            q = create_node(val);
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
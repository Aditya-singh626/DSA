#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void append(struct Node **head_ref, int value)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = newnode;
        return;
    }
    struct Node *cur = *head_ref;
    while (cur->next != NULL)
        cur = cur->next;
    cur->next = newnode;
}

void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct Node *concatenate(struct Node *A, struct Node *B)
{
    if (A == NULL)
        return B;
    struct Node *cur = A;
    while (cur->next != NULL)
        cur = cur->next;
    cur->next = B;
    return A;
}

int main()
{
    struct Node *A = NULL, *B = NULL;
    int n, val;

    printf("Enter number of nodes in list A: ");
    if (scanf("%d", &n) != 1)
        return 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter data: ");
        scanf("%d", &val);
        append(&A, val);
    }

    printf("Enter number of nodes in list B: ");
    if (scanf("%d", &n) != 1)
        return 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter data: ");
        scanf("%d", &val);
        append(&B, val);
    }

    printf("List A: ");
    printList(A);
    printf("List B: ");
    printList(B);

    A = concatenate(A, B);

    printf("After concatenation: ");
    printList(A);
    return 0;
}

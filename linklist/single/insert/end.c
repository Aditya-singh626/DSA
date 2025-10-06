#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head, *p, *q;
 typedef struct Node node;
 //insert at beginning
 void insertAtEnding(){
  q=(node *)malloc(sizeof(node));
  printf("Enter data to be inserted at end: "); 
  scanf("%d",&q->data);
  p->next=q;
  q->next=NULL;
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
    
 //insert at beginning function call
    insertAtEnding();

  //print
    p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}

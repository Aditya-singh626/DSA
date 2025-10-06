#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head, *p, *q;
 typedef struct Node node;
 //insert at beginning
 int search(int x,int y){
    p=head;
    for (int i = 0; i < y; i++){
        if(p->data==x){
            return i+1;
        }
        p=p->next;
    }
    
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
    printf("Enter element to be searched: ");
    int x; 
    scanf("%d",&x);
   int post= search(x,n);

    //print
    printf("Element found at position: %d",post);
    return 0;
}

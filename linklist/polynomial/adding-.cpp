#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

/* Create a new node */
struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

/* Insert node at the end */
void insertNode(struct Node** head, int coeff, int exp) {
    struct Node* newNode = createNode(coeff, exp);
    struct Node* temp = *head;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

/* Display polynomial */
void display(struct Node* head) {
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->exp);
        head = head->next;
        if (head != NULL)
            printf(" + ");
    }
    printf("\n");
}

/* Add two polynomials */
struct Node* addPolynomials(struct Node* p1, struct Node* p2) {
    struct Node* result = NULL;

    while (p1 != NULL && p2 != NULL) {
        if (p1->exp == p2->exp) {
            insertNode(&result, p1->coeff + p2->coeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->exp > p2->exp) {
            insertNode(&result, p1->coeff, p1->exp);
            p1 = p1->next;
        }
        else {
            insertNode(&result, p2->coeff, p2->exp);
            p2 = p2->next;
        }
    }

    /* Copy remaining terms */
    while (p1 != NULL) {
        insertNode(&result, p1->coeff, p1->exp);
        p1 = p1->next;
    }

    while (p2 != NULL) {
        insertNode(&result, p2->coeff, p2->exp);
        p2 = p2->next;
    }

    return result;
}

/* Main function */
int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* sum = NULL;

    /* First Polynomial: 5x^3 + 4x^2 + 2x + 1 */
    insertNode(&poly1, 5, 3);
    insertNode(&poly1, 4, 2);
    insertNode(&poly1, 2, 1);
    insertNode(&poly1, 1, 0);

    /* Second Polynomial: 3x^3 + 1x^2 + 4 */
    insertNode(&poly2, 3, 3);
    insertNode(&poly2, 1, 2);
    insertNode(&poly2, 4, 0);

    printf("First Polynomial: ");
    display(poly1);

    printf("Second Polynomial: ");
    display(poly2);

    sum = addPolynomials(poly1, poly2);

    printf("Sum Polynomial: ");
    display(sum);

    return 0;
}

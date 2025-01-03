#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *first = 0;

// Creating a linked list
void create(int A[], int n) {
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    // Creating first node
    first->data = A[0];
    first->next = 0;
    last = first;
    // Creating nodes after the first node
    for (i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = 0;
        last->next = t;
        last = t;
    }
}

// Function to check if the linked list is sorted
int isSorted(struct Node *p) {
    int x = -32768;  // Initialize to a very small value
    while (p != 0) {
        if (p->data < x)
            return 0;  // Not sorted
        x = p->data;
        p = p->next;
    }
    return 1;  // Sorted
}

int main() {
    int A[] = {1, 2, 3, 6, 5};
    create(A, 5);
    
    if (isSorted(first))
        printf("The linked list is sorted.\n");
    else
        printf("The linked list is not sorted.\n");
    
    return 0;
}

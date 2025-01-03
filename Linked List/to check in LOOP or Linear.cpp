#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *first = 0;

void create(int A[], int n) {
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    // Creating the first node
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

void display(struct Node *p) {
    while (p != 0) {
        printf("%d ", p->data);
        p = p->next;
    }
}

int isLoop(struct Node *p) {
    struct Node *q;
    p = q = first;
    do {
        p = p->next;
        if (q != NULL && q->next != NULL)
            q = q->next->next;
        else
            q = NULL;
    } while (p != NULL && q != NULL && p != q);
    return (p == q) ? 1 : 0;
}

int main() {
    struct Node *t1, *t2;
    int A[] = {10, 20, 30, 40, 50};  // Create the array
    create(A, 5);  // Create the linked list
    
    // Create a loop for testing
    t1 = first->next->next;             // Point to the third node (30)
    t2 = first->next->next->next->next; // Point to the last node (50)
    t2->next = t1;                      // Create a loop (50 -> 30)
    
    // Checking for loop
    if (isLoop(first)) {
        printf("Linked List is in LOOP.\n");
    } else {
        printf("Linked List is Linear.\n");
    }

    return 0;
}

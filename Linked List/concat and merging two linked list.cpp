#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = 0;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    // Creating the first node
    first->data = A[0];
    first->next = 0;
    last = first;
    // Creating nodes after the first node
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = 0;
        last->next = t;
        last = t;
    }
}

// Concatenation of 2 linked lists
void concat(struct Node *p)
{
    struct Node *second, *last;
    int B[] = {7, 8, 9};
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = B[0];
    second->next = 0;
    last = second;

    // Create the remaining nodes for the second list
    for (int i = 1; i < 3; i++)
    {
        struct Node *t = (struct Node *)malloc(sizeof(struct Node));
        t->data = B[i];
        t->next = 0;
        last->next = t;
        last = t;
    }

    // Move to the end of the first list
    while (p->next != 0)
    {
        p = p->next;
    }
    p->next = second; // Concatenate the second list
    second = 0;
}

// Merging two linked lists
void merge(struct Node *p)
{
    struct Node *second, *last, *third;
    int B[] = {7, 8, 9};
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = B[0];
    second->next = 0;
    last = second;

    // Create the remaining nodes for the second list
    for (int i = 1; i < 3; i++)
    {
        struct Node *t = (struct Node *)malloc(sizeof(struct Node));
        t->data = B[i];
        t->next = 0;
        last->next = t;
        last = t;
    }

    if (first->data < second->data)
    {
        third = last = first;
        first = first->next;
        last->next = 0;
    }
    else
    {
        third = last = second;
        second = second->next;
        last->next = 0;
    }

    while (first != 0 && second != 0)
    {
        if (first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = 0;
        }
        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = 0;
        }
    }

    // If any nodes remain in first or second list
    if (first != 0) last->next = first;
    if (second != 0) last->next = second;

    // Update first to point to the merged list
    first = third;
}

void display(struct Node *p)
{
    while (p != 0)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6};
    create(A, 6);
    printf("Original list: ");
    display(first);
    printf("\n");

    concat(first);
    printf("Concatenated list: ");
    display(first);
    printf("\n");

    merge(first);
    printf("Merged list: ");
    display(first);
    printf("\n");

    return 0;
}

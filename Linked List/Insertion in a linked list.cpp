#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL;  // Separate pointers for both lists

// Create 1st linked list from an array
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Create 2nd linked list from an array
void createSecond(int B[], int n)
{
    int i;
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = B[0];
    second->next = NULL;
    last = second;

    for(i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = B[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Display the linked list
void display(struct Node *p)
{
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

// Insert a new node at a specific position in the first list
void insert(int pos, int x)
{
    struct Node *t, *p;
    int i;

    if(pos == 0)  // Insertion at the beginning
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = first;
        first = t;
    }
    else if(pos > 0)  // Insertion at a given position
    {
        p = first;
        for(i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
        if(p)  // Ensure position is within bounds
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}

// Insert a new node at the end of the first list
void InsertLast(int x)
{
    struct Node *t, *last = first;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if(first == NULL)
    {
        first = last = t;
    }
    else
    {
        while(last->next != NULL)  // Move to the last node
        {
            last = last->next;
        }
        last->next = t;
    }
}

// Insert a new node in a sorted linked list (second list)
void SortedInsert(struct Node *p, int x)
{
    struct Node *t, *q = NULL;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if(first == NULL)  // If the list is empty
    {
        first = t;
    }
    else
    {
        while(p != NULL && p->data < x)  // Traverse to find the insertion point
        {
            q = p;
            p = p->next;
        }

        if(p == first)  // Insert at the beginning
        {
            t->next = first;
            first = t;
        }
        else  // Insert in between or at the end
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int main()
{
    int A[] = {8, 3, 9, 7, 6};
    create(A, 5);

    printf("Displaying elements of first list: ");
    display(first);
    printf("\n");

    printf("After Insertion at position 4 in first list: ");
    insert(4, 10);
    display(first);
    printf("\n");

    printf("After Insertion at last in first list: ");
    InsertLast(8);
    display(first);
    printf("\n");

    int B[] = {3, 7, 9, 15, 20};
    createSecond(B, 5);

    printf("Displaying elements of second list: ");
    display(second);
    printf("\n");

    printf("After Insertion in a sorted linked list (first list): ");
    SortedInsert(second, 5);
    display(second);
    printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
} *first = NULL;

// Create a linked list from an array
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    // Creating first node
    first->data = A[0];
    first->next = NULL;
    last = first;
    // Creating nodes after the first node
    for(i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
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

// Function to count the number of nodes in the linked list
int count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

// Delete a node at a given position
int Delete(int pos)
{
    struct Node *p, *q = NULL;
    int x = -1, i;

    if(first == NULL)  // Check if the list is empty
        return -1;

    if(pos == 1)  // Deleting the first node
    {
        p = first;
        x = first->data;
        first = first->next;
        free(p);  // Free the memory of the deleted node
    }
    else  // Deleting any other node
    {
        p = first;
        for(i = 0; i < pos - 1 && p != NULL; i++)
        {
            q = p;
            p = p->next;
        }
        if(p != NULL)  // Ensure the position is valid
        {
            q->next = p->next;
            x = p->data;
            free(p);  // Free the memory of the deleted node
        }
    }
    return x;
}

// Second delete function based on index
int Delete1(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1;
    int i;

    if(index < 1 || index > count(p))  // Check for valid index
    {
        return -1;
    }

    if(index == 1)  // Deleting the first node
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else  // Deleting any other node
    {
        for(i = 0; i < index - 1 && p != NULL; i++)
        {
            q = p;
            p = p->next;
        }
        if(p != NULL)
        {
            q->next = p->next;
            x = p->data;
            free(p);
            return x;
        }
    }
    return x;
}

int main()
{
    int A[] = {8, 3, 9, 7, 6};
    create(A, 5);

    printf("Displaying elements: ");
    display(first);
    printf("\n");

    printf("After Deletion 1st method: ");
    Delete(3);
    display(first);
    printf("\n");

    printf("After Deletion 2nd method: ");
    Delete1(first, 2);  // Corrected call to Delete1
    display(first);
    printf("\n");

    return 0;
}

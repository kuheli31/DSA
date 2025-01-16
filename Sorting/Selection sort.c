#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform selection sort
void select(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        k = i; // Assume the current index is the maximum
        for (j=k=i; j < n; j++)
        {
            if (A[j] > A[k]) // Find the maximum element
            {
                k = j;
            }
        }
        // Swap the found maximum element with the first element
        swap(&A[i], &A[k]);
    }
}

// Function to print an array
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    int A[] = {5, 2, 3, 1, 0};
    int n = 5;

    printf("Before sorting: ");
    printArray(A, n);

    select(A, n);

    printf("After sorting: ");
    printArray(A, n);

    return 0;
}
//O(n^2)

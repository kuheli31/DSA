#include <stdio.h>
#include <stdlib.h>

void create(int A[], int n) {
    int i;
    for (i = 1; i <= n; i++) {
        scanf("%d", &A[i - 1]);
    }
}

int get(int A[], int i, int j) {
    if (i == j) {
        return A[i - 1];
    } else {
        return 0;
    }
}

void set(int A[], int i, int j, int x) {
    if (i == j) {
        A[i - 1] = x;
    }
}

void display(int A[], int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j) {
                printf("%d ", A[i - 1]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int *A, i, j, x, n, ch;

    printf("Enter Dimensions: ");
    scanf("%d", &n);

    A = (int *)malloc(n * sizeof(int));

    do {
        printf("\nMenu:\n");
        printf("1. Create an Array\n");
        printf("2. Get the value from the given index\n");
        printf("3. Set the value\n");
        printf("4. Display the matrix\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: // Creating an array
                printf("Enter the elements of the diagonal matrix:\n");
                create(A, n);
                break;

            case 2: // Getting the value from a given index
                printf("Enter row: ");
                scanf("%d", &i);
                printf("Enter column: ");
                scanf("%d", &j);
                printf("Value at (%d, %d): %d\n", i, j, get(A, i, j));
                break;

            case 3: // Setting the value
                printf("Enter row: ");
                scanf("%d", &i);
                printf("Enter column: ");
                scanf("%d", &j);
                printf("Enter element: ");
                scanf("%d", &x);
                set(A, i, j, x);
                break;

            case 4: // Displaying the matrix
                printf("The diagonal matrix is:\n");
                display(A, n);
                break;

            case 5: // Exit
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (ch != 5);

    free(A); // Free the allocated memory
    return 0;
}

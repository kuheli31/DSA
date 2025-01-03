#include <stdio.h>

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare two arrays with the given size
    int original[size], copied[size];

    // Input values into the original array
    printf("Enter %d elements for the original array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &original[i]);
    }

    // Copy elements from the original array to the copied array
    for (int i = 0; i < size; i++) {
        copied[i] = original[i];
    }

    // Display the elements of the copied array
    printf("Elements of the copied array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", copied[i]);
    }
    printf("\n");

    return 0;
}

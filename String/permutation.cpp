#include <iostream>
using namespace std;

// Function to generate all permutations of a given string
void permutation(char s[], int k) {
    static int A[10] = {0}; // Array to keep track of used characters
    static char Res[10];    // Array to store the current permutation
    int i;

    if (s[k] == '\0') { // Base case: If the end of the string is reached
        Res[k] = '\0';  // Null-terminate the permutation string
        cout << Res << endl; // Output the permutation
    } else {
        for (i = 0; s[i] != '\0'; i++) { // Loop through all characters of the string
            if (A[i] == 0) { // If the character is not yet used
                Res[k] = s[i]; // Include the character in the current position
                A[i] = 1;      // Mark the character as used
                permutation(s, k + 1); // Recursive call for the next position
                A[i] = 0;      // Backtrack: Mark the character as unused
            }
        }
    }
}

int main() {
    char s[] = "ABC"; // Input string
    permutation(s, 0); // Call the permutation function starting with index 0
    return 0; // Return success
}

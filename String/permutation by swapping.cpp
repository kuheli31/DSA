#include <iostream>  // Include the input-output stream library
#include <string>    // Include the string library for character array manipulation
using namespace std; // Use the standard namespace to avoid prefixing with std::

void permutation(char s[], int l, int h) {
    // Function to generate all permutations of a string s[l..h]
    int i; // Variable for looping
    if (l == h) {
        // Base case: If left index equals the right index, print the current permutation
        cout << s << endl; // Print the string
    } else {
        for (i = l; i <= h; i++) {
            // Loop through each character in the substring
            swap(s[l], s[i]); // Swap the current character with the character at the left index
            permutation(s, l + 1, h); // Recursively call permutation for the remaining substring
            swap(s[l], s[i]); // Backtrack by swapping the characters back to their original positions
        }
    }
}

int main() {
    // Main function to test the permutation function
    char str[] = "ABC"; // Define the input string (character array)
    int n = strlen(str); // Calculate the length of the string
    cout << "Permutations of the string \"" << str << "\":" << endl; // Print the header message
    permutation(str, 0, n - 1); // Call the permutation function with the full range of the string
    return 0; // Return 0 to indicate successful execution
}

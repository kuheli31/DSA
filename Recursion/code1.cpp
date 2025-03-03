//Print Name n times using Recursion.
#include <iostream>
using namespace std;

void printName(int i, int n)
{
    if (i == n + 1) return;  // Clearer base case
    cout << "Kuheli" << endl; // Removed unnecessary space
    printName(i + 1, n);
}

int main()
{
    int n;
    cout << "Enter the number of times you want to print your name: ";
    cin >> n;
    printName(1, n);
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(n)

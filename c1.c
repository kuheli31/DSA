// Reverse A given Number
#include <stdio.h>

int main() 
{
    int n, rem, s = 0;
    printf("Enter a number to reverse: ");
    scanf("%d", &n);
    
    while (n > 0) {
        rem = n % 10;
        s = s * 10 + rem;
        n = n / 10;
    }
    
    printf("Reverse number is: %d\n", s);
    
    return 0;
}

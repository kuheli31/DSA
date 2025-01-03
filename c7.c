//Count Number of Digits of an Integer
#include<stdio.h>
int main() 
{
    int n, c = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    // Count the number of digits
    while (n != 0)
	{
        n /= 10;
        c++;
    }

    printf("Number of digits: %d\n", c);

    return 0;
}

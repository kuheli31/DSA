#include<stdio.h>
int main()
{
	int n, s, q, t;
	printf("Enter the number=");
	scanf("%d", &n);
	s = n % 10;          // Extracting the last digit
	q = n / 10 % 10;     // Extracting the second last digit
	t = n - q * 10 - s;  // Removing the last two digits
	t = t + s * 10 + q;  // Exchanging the last two digits
	printf("Exchanging last two digits of a number=%d", t);
	return 0;
}

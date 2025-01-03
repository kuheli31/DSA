#include<stdio.h>
int main()
{
	int n,rem;
	printf("Enter the number=");
	scanf("%d",&n);
	rem=n%10;
	printf("Last digit of number=%d",rem);
}
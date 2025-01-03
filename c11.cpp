#include<stdio.h>
int main()
{
	int n,rem,p;
	printf("Enter the number=");
	scanf("%d",&n);
	rem=n%10;
	p=rem*rem;
	printf("Last digit number after doubling=%d",p);
	return 0;
}
	
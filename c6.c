// Check Whether a Number is A Palindrome or Not
#include<stdio.h>
int main()
{
	int n,rem,s=0,m;
	printf("Enter a number to reverse=");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem=n%10;
		s=s*10+rem;
		n=n/10;
	}
	if(m==s)
	{
		printf("Palindrome number.");
	}
	else
	{
		printf("Not a palindrome number.");
	}
	return 0;
}
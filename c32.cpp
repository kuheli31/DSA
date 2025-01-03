#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);	
	}
}
int main()
{
	int p,i;
	printf("Enter a number=");
	scanf("%d",&p);
	i=fact(p);
	printf("Factorial=%d",i);
	return 0;
}
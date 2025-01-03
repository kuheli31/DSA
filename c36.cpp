#include<stdio.h>
int gcd(int m,int n)
{
	if(n!=0)
	{
		return gcd(n,m%n);
	}
	else
	{
		return m;
	}
}
int main()
{
	int x,y;
	printf("Enter two numbers=");
	scanf("%d %d",&x,&y);
	printf("GCD is=%d\n",gcd(x,y));
	return 0;
}
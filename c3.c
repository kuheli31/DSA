//Calculate Sum of Natural Numbers
#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("Enter the limit=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		 s=s+i;
	}
	printf("Sum of natural number is=%d",s);
	return 0;
}
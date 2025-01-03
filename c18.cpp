#include<stdio.h>
int main()
{
	int n,b=1,a=0,i,c;
	printf("Enter the limit=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
	
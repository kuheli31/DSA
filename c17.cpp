#include<stdio.h>
int main()
{
	int n,m,s=0;
	printf("Enter the number=");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		s=s*10 +m;
		n=n/10;
	}
	printf("Reversed number=%d",s);
	return 0;
}
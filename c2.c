// Find Number Is Armstrong Or Not
#include<stdio.h>
#include<math.h>
int main()
{
	double n,rem,m,s=0;
	printf("Enter the number=");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem=n%10;
		s=s+ pow(rem,3);
		n=n/10;
	}
	if(m==s)
	{
		printf("Armstrong Number.");
	}
	else
	{
		printf("Not a Armstrong Number.");
	}
	return 0;
}
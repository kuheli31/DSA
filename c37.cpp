#include<stdio.h>
int lcm(int x,int y)
{
	int q=y;
	q=q+y;
	if((q%x==0)&&(q%y==0))
	{
		return q;
	}
	else
	{
		return lcm(x,y);
	}
}
int main()
{
	int m,n,LCM;
	printf("Enter two numbers=");
	scanf("%d %d",&m,&n);
	if(m>n)
	{
		 LCM=lcm(m,n);
	}
	else
	{
		 LCM=lcm(n,m);
	}
	printf("LCM is=%d",LCM);
	return 0;
}
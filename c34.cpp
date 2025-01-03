#include<stdio.h>
int gcd(int m,int n)
{ 
	int hcf=1;
	for(int i=1;i<=m||i<=n;++i)
	{
		if(m%i==0 && n%i==0)
		{
			hcf=i;
		}	
	}	
	return hcf;
}
int main()
{
	int x,p,y;
	printf("Enter two numbers=");
	scanf("%d %d",&x,&y);
	
	p=gcd(x,y);
	printf("GCD is=%d",p);
	
	return 0;
}
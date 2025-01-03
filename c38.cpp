#include<stdio.h>
int main()
{
	int *p1,*p2,x,y,sum=0;
	printf("Enter any two number=");
	scanf("%d%d",&x,&y);
	p1=&x;
	p2=&y;
	sum=*p1+*p2;
	printf("Sum=%d",sum);
}
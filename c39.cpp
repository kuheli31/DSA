#include<stdio.h>
int main()
{
	int *p1,*p2,a,b;
	printf("1st number=");
	scanf("%d",&a);
	printf("2nd number=");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	int c=a;
	a=b;
	b=c;
	printf("1st swap=%d",a);
	printf("2nd swap=%d",b);
}
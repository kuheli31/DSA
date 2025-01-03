#include<stdio.h>
int main()
{
	int a,b,c;
	printf("1st number=");
	scanf("%d", &a);
	printf("2nd number=");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("1st swap=%d\n",a);
    printf("2nd swap=%d",b);
	return 0;
}
	
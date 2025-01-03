#include<stdio.h>
int main()
{
	int a,b,c;
	printf("1st number=");
	scanf("%d", &a);
	printf("2nd number=");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("1st swap=%d\n",a);
    printf("2nd swap=%d",b);
    return 0;
}
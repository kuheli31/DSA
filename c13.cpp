#include<stdio.h>
int main()
{
	int n,m,s,p,q,h;
	printf("Enter the first number=");
	scanf("%d", &m);
	printf("Enter the second number=");
	scanf("%d", &n);
	s=n-(n%10);//extracting except last digit
    p=m-(m%10);//extracting except last digit	
    q=s+(m%10);
    h=p+(n%10);
    printf("Product after exchanging last two digits of both number=%d",q*h);
    return 0;
}
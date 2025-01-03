#include<stdio.h>
int main()
{
	int x,i,n;
	printf("Enter size=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	printf("Enter element to search=");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
			if(a[i]==x)
			break;
	}
	if(i<n)
	{
		printf("Element found at =%d",i);
	}
	else
	{
		printf("Element not found.");
	}
	
}
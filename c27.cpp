#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter array size=");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements:\n", n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements of the array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
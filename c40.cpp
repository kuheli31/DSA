#include<stdio.h>
int main()
{
	int n,i,j;
	
	printf("Enter size=");
	scanf("%d",&n);
	int a[n];6
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		int max=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[max])
			{
				max=j;
			}
		}
		if(max!=i)
		{
			int temp=a[i];
			a[i]=a[max];
			a[max]=temp;
		}
	}
	printf("Descending order=");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
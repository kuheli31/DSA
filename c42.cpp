#include<stdio.h>
int main()
{
	int j,i,n;
	printf("Enter size=");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting=");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}
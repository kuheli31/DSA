#include <stdio.h>
#include <stdlib.h>

void Insert(int A[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int x=A[i];
		while(j>-1 && A[j]>x)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=x;
	}
}

int main()
{
	printf("Original Array:");
	int A[]={8,5,7,3,2};
	int n=5;
	for(int i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	Insert(A,5);
	printf("After Insertion sort:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}
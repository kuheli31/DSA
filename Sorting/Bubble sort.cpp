#include <stdio.h>
#include <stdlib.h>
void Bubble(int A[],int n)
{
	int i,j;
	int flag;
	for(i=0;i<n-1;i++)
	{flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
}
int main()
{
	printf("Original Array:");
	int A[]={2,3,5,7,8};
	int n=5;
	for(int i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	Bubble(A,5);
	printf("After Bubble sort:");
	for(int i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}
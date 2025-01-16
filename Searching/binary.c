#include <stdio.h>
#include <stdlib.h>
int Bin(int *A,int low,int high ,int key)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		
		if(key==A[mid])
		{
			return mid;
		}
		else if(key<A[mid])
		{
			return Bin(A,low,mid-1,key);
		}
		else
		{
			return Bin(A,mid+1,high,key);
		}
	}
	else
	{
		return -1;
	}
}
int main()
{
	int *A,l,high,key,i;
	
	printf("Enter the number to search=");
	scanf("%d",&key);
	
	printf("Enter the limit=");
	scanf("%d",&l);
	
	A=(int *)malloc(l*sizeof(int));
	
	printf("Enter the elements in a sorted way=");
	for(i=0;i<l;i++)
	{
		scanf("%d",&A[i]);
	}
	int result=Bin(A,0,l-1,key);
	if(result!=-1)
	{
		printf("Found at=%d",result);
	}
	else
	{
		printf("Not Found.");
	}
	free(A);
	return 0;
}
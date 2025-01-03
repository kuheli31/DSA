#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter number of rows=");
	scanf("%d",&row);
    printf("Enter number of columns=");
	scanf("%d",&col);
	int a[row][col];
	printf("Enter the elements=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Displayed elements=\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
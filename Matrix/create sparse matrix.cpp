#include <stdio.h>
#include <stdlib.h>
struct Element//Representation of non-zero elements
{
	int i;
	int j;
	int x;
};
struct Sparse
{
	int i;
	int m;//rows
	int n;//columns
	int num;//number of non-zero elements
	struct Element *ele;
};
void create(struct Sparse *s)
{
	int i;
	printf("Enter rows:");
	scanf("%d",&s->m);
	printf("Enter columns:");
	scanf("%d",&s->n);
	printf("Number of non-zero elements:");
	scanf("%d",&s->num);
	
	s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));//creating an array of size num
	for(i=0;i<s->num;i++)
	{
		scanf("%d %d %d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);
	}
}
void Display(struct Sparse s)
{
	int i,j,k=0;
	for(i=0;i<s.m;i++)
	{
		for(j=0;j<s.n;j++)
		{
			if(i==s.ele[k].i && j==s.ele[k].j)
			{
				printf("%d ",s.ele[k++].x);
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
int main()
{
	struct Sparse s;
	
	create(&s);
	Display(s);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*first=0;
void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first=(struct Node *)malloc(sizeof(struct Node));
	//Creating first node
	first->data=A[0];
	first->next=NULL;
	last=first;
	//Creating nodes after first node
	for(i=1;i<n;i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void Display(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;//p is moving to next node
	}
}
int count(struct Node *p)
{
	int c=0;
	while(p!=0)
	{
		c++;
		p=p->next;
	}
	return c;
}
int rcount(struct Node *p)
{
	if(p==0)
	{
		return 0;
	}
	else
	{
		return count(p->next)+1;
	}
}
int Sum(struct Node *p)
{
	int sum=0;
	while(p!=0)
	{
		sum=sum + p->data;
		p=p->next;
	}
	return sum;
}
int rSum(struct Node *p)
{
	if(p==0)
	{
		return 0;
	}
	else
	{
		return rSum(p->next) + p->data;
	}
}
int Max(struct Node *p)
{
	int max=INT_MIN;//Built in C code
	while(p)
	{
		if(p->data>max)
		{
			max=p->data;
		}
		p=p->next;
	}
	return max;
}
int rMax(struct Node *p)
{
	int x;
	if(p==0)
	{
		return INT_MIN;
	}
	else
	{
		x=rMax(p->next);
		if(x > p->data)
		{
			return x;
		}
		else
		{
			return p->data;
		}
	}
}
search(struct Node *p,int key)
{
	while(p!=0)
	{
		if(key==p->data)
		{
			return p;
		}
		p=p->next;
	}
	return 0;
}
int main()
{
	int A[]={3,5,7,10,15};
	create(A,5);
	printf("Displaying elements:");
	Display(first);
	printf("\n");
	printf("Number of nodes:%d",count(first));
	printf("\n");
	printf("Number of nodes using recursion:%d",rcount(first));
	printf("\n");
	printf("Sum of nodes=%d",Sum(first));
	printf("\n");
	printf("Sum of nodes using recursion=%d",rSum(first));
	printf("\n");
	printf("Maximum number is=%d",Max(first));
	printf("\n");
	printf("Maximum number is=%d",rMax(first));
	printf("\n");
	return 0;
}
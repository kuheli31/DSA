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
	first->next=0;
	last=first;
	//Creating nodes after first node
	for(i=1;i<n;i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=0;
		last->next=t;
		last=t;
	}
}
void display(struct Node *p)
{
	while(p!=0)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
Node *search(struct Node *p,int key)
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
Node *rsearch(struct Node *p,int key)
{
	if(p==0)
	{
		return 0;
	}
	if(key==p->data)
	{
		return p;
	}
	else
	{
		return rsearch(p->next,key);
	}
}
Node *mhsearch(struct Node *p,int key)
{
	struct Node *q=0;
	while(p!=0)
	{
		if(key==p->data)
		{
			if(q!=0)
			{
			q->next=p->next;
			p->next=first;
			first=p;
			}
			return p;
		}
		q=p;
		p=p->next;
	}
	return 0;
}
int main()
{
	int A[]={3,5,7,10,15};
	int key=11;
	create(A,5);
	printf("Displaying elements:");
	display(first);
	printf("\n");
	printf("Searching in a linked list:");
	Node *found = search(first, key); 
	if(found)
	{
		printf("Element Found.");
	}
	else
	{
		printf("Element not found.");
	}
	printf("\n");
	printf("Searching in a linked list using recursion:");
	Node *found1 = rsearch(first, key);
	if(found1)
	{
		printf("Element Found.");
	}
	else
	{
		printf("Element not found.");
	}
	printf("\n");
	printf("Searching in a linked list using move to head method:");
	Node *found2 = mhsearch(first, key);
	if(found2)
	{
		printf("Element Found.");
	}
	else
	{
		printf("Element not found.");
	}
	printf("\n");
	return 0;
}
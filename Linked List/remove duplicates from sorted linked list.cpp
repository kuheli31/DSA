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
//Removing duplicates in sorted linked list
void duplicate(struct Node *p)
{
	struct Node *q=first->next;
	while(q!=0)
	{
		if(p->data != q->data)
		{
			p=q;
			q=q->next;
		}
		else
		{
			p->next=q->next;
			free(q);
			q=p->next;
		}
	}
	
}
//Displaying Linked list
void display(struct Node *p)
{
	while(p!=0)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
int main()
{
	int A[]={3,5,5,8,8,8};
	create(A,6);
	printf("Original array:");
	display(first);
	printf("\n");
	duplicate(first); 
	printf("After removing duplicates from the linked list:");
	display(first);
	return 0;
}
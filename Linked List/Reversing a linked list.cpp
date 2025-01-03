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
void reverse1(struct Node *p,int A[])
{
	int i=0;
	while(p!=0)
	{
		A[i]=p->data;
		p=p->next;
		i++;
	}
	p=first;
	i--;
	while(p!=0)
	{
		p->data=A[i--];
		p=p->next;
	}
}
//by links
void reverse2(struct Node *p,int A[])
{
	struct Node *q,*r;            
	q=0;
	r=0;  
	while(p!=0)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
}
//recursion
void reverse3(struct Node *q,struct Node *p)
{
	if(p!=0)
	{
		reverse3(p,p->next);
		p->next=q;
	}
	else
	{
		first=q;
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
int main()
{
	int A[]={1,2,3,4,5,6};
	create(A,6);
	printf("Original array:");
	display(first);
	printf("\n");
	reverse1(first,A); 
	printf("After reversing the linked list by interchanging:");
	display(first);
	printf("\n");
	reverse2(first,A); 
	printf("After reversing the linked list by links:");
	display(first);
	printf("\n");
	reverse3(0,first); 
	printf("After reversing the linked list by recursion by links:");
	display(first);
	return 0;
}
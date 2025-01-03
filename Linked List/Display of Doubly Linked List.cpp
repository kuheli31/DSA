#include <stdio.h>
#include <stdlib.h>
struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
}*first=0;
//for creating node
void create(int A[],int n)
{
	struct Node *t,*last;
	int i;
	first=(struct Node *)malloc(sizeof(struct Node));
	first->data = A[0];
	first->prev = first->next = 0;
	last=first;
	
	for(i=1;i<n;i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = last->next;
		t->prev = last;
		last->next = t;
		last=t;
	}
}
int Length(struct Node *p)
{
	int len=0;
	while(p)
	{
		len++;
		p=p->next;
	}
	return len;
}

void Display(struct Node *p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

int main()
{
	int A[]={1,2,3,4,5};
	create(A,5);
	printf("Displaying Doubly Linked List:");
	Display(first);
	printf("\n");
	printf("Length is:%d",Length(first));
	printf("\n");
	
}
#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*first=NULL;//global pointer---it can be directly accesed or can be passed as parameter
void create(int A[],int n)
{
	int i;
	struct Node *t,*last;
	first=(struct Node *)malloc(sizeof(struct Node));
	
	//First node is ready
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	//Creating next nodes after first node
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
	if(p!=NULL)
	{
		//printf("%d ",p->data);
		Display(p->next);//p is moving to next node
		printf("%d ",p->data);
	}
}
int main()
{
	int A[]={3,5,7,10,15};
	create(A,5);
	Display(first);
	return 0;
}
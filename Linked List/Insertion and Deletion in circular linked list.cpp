#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
    struct Node *next;
}*Head;
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    Head=(struct Node*)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head;
    last=Head;
    
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
//for length find
int Length(struct Node *p)
 {
    int len=0;
    do
    {
        len++;
        p=p->next;
        
    }while(p!=Head);
    return len;
 }
//for insertion
void Insert(struct Node *p,int index,int x)
{
	struct Node *t;
	int i;
    if(index<0 || index > Length(p))
        return;
    
    if(index==0)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        if(Head==NULL)
        {
            Head=t;
            Head->next=Head;
        }
        else
        {
            while(p->next!=Head)
			{
			p=p->next;
			}
            p->next=t;
            t->next=Head;
            Head=t;
        }
        
    }
    else
    {
        for(i=0;i<index-1;i++)
		{
		p=p->next;
		}
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        t->next=p->next;
        p->next=t;
        
    }
}
//for deletion
int Delete(struct Node *p,int index)
 {
    struct Node *q;
    int i,x;
    
    if(index <0 || index >Length(Head))
        return -1;
    if(index==1)
    {
        while(p->next!=Head)p=p->next;
        x=Head->data;
        if(Head==p)
        {
            free(Head);
            Head=NULL;
        }
        else
        {
        }
            p->next=Head->next;
 free(Head);
 Head=p->next;
    }
 else
    {
 for(i=0;i<index-2;i++)
            p=p->next;
        q=p->next;
        p->next=q->next;
        x=q->data;
 free(q);
    }
 return x;
}
void Display(struct Node *h)
{
    do
    {
        printf("%d ",h->data);
        h=h->next;
    }while(h!=Head);
    printf("\n");
}
int main()
{
int A[]={2,3,4,5,6};
create(A,5);
printf("Original Array:");
Display(Head);
printf("\n");
printf("After Insertion:");
Insert(Head,3,8);
Display(Head);
printf("\n");
printf("After Deletion:");
Delete(Head,3);
Display(Head);
printf("\n");
return 0;
}
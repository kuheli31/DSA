#include <stdio.h>
#include <stdlib.h>
struct Term
{
	int coeff;
	int exp;
};
struct Poly
{
	int n;
	struct Term *terms;
};
void create(struct Poly *p)//call by reference
{
	int i;
	printf("Number of terms?");
	scanf("%d",&p->n);
	
	p->terms=(struct Term *)malloc(p->n*sizeof(struct Term));
	
	printf("Enter Polynomial Terms:\n");
	for(i=0;i<p->n;i++)
	{
		printf("Term no. %d",i+1);
		scanf("%d %d",&p->terms[i].coeff , &p->terms[i].exp);
	}
}
void Display(struct Poly p)//call by value
{
	int i;
	for(i=0;i<p.n;i++)
	{
		printf("%dx%d+",p.terms[i].coeff,p.terms[i].exp);
	}
	printf("\n");
}
int main()
{
	struct Poly p1;
	create(&p1);
	Display(p1);
	return 0;
}
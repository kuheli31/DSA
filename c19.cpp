#include<stdio.h>
int main()
{
	int i,start,end,temp,c;
	printf("Enter the start and end limit=");
	scanf("%d %d",&start,&end);
	if(start>end)
	{
		temp=start;
		start=end;
		end=temp;
	}
	else
	{
		for(i=start;i<=end;i++)
		{
        	int prime=1;
			for(c=2;c<i;c++)
			{
				if(i%c==0)
				{
				prime=0;
				break;
				}
			}
			if(prime)
			{
			printf("%d\n",i);
			}
		}
	}
	return 0;
}
	
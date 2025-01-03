#include <iostream>
using namespace std;
class LowTri
{
	private:
		int *A;
		int n;
	public:
		LowTri()//Constructor
		{
			n=2;
			A=new int[2*(2+1)/2];
		}
		LowTri(int n)
		{
			this->n=n;
			A=new int[n*(n+1)/2];
		}
		~LowTri()//Destructor
		{
			delete []A;
		}
		void Set(int i,int j,int x);
		int Get(int i,int j);
		void Display();
};
void LowTri::Set(int i,int j,int x)
{
	if(i>=j)
	{
		A[(i*(i-1)/2)+(j-1)]=x;
	}
}
int LowTri::Get(int i,int j)
{
	if(i>=j)
	{
		return A[(i*(i-1)/2)+(j-1)];
	}
	else
	{
		return 0;
	}
}
void LowTri::Display()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i>=j)
			{
				cout<<A[(i*(i-1)/2)+(j-1)]<<" ";
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}
int main()
{
	int d;//inputting dimension
	cout<<"Enter Dimensions:";
	cin>>d;
	LowTri lm(d);//object is lm
	int x,i,j;
	printf("Enter all elements:");
	for(i=1;i<=d;i++)
	{
		for(j=1;j<=d;j++)
		{
			cin>>x;
			lm.Set(i,j,x);
		}
	}
	cout<<"Lower Triangular Row-Major Matrix:"<<endl;
	lm.Display();
	
	return 0;
}
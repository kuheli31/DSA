#include <iostream>
using namespace std;
class Diagonal
{
	private:
		int *A;
		int n;
	public:
		Diagonal()//Constructor
		{
			n=2;
			A=new int[2];
		}
		Diagonal(int n)
		{
			this->n=n;
			A=new int[n];
		}
		~Diagonal()//Destructor
		{
			delete []A;
		}
		void Set(int i,int j,int x);
		int Get(int i,int j);
		void Display();
};
void Diagonal::Set(int i,int j,int x)
{
	if(i==j)
	{
		A[i-1]=x;
	}
}
int Diagonal::Get(int i,int j)
{
	if(i==j)
	{
		return A[i-1];
	}
	else
	{
		return 0;
	}
}
void Diagonal::Display()
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				cout<<A[i]<<" ";
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
	Diagonal d(4);//Creating object d
	d.Set(1,1,5);
	d.Set(2,2,8);
	d.Set(3,3,9);
	d.Set(4,4,12);
	
	d.Display();
	
	return 0;
}
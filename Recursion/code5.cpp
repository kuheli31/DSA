//Factorial of a number
#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n<=1) return 1;
	else
	{
		return n*factorial(n-1);
	}
}

int main()
{
	int n=5;
    cout<<factorial(5);
    return 0;
}
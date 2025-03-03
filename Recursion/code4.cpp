//summation of n natural numbers using recursion
#include <iostream>
using namespace std;

int printSum(int n)
{
	if(n==0) return 0;
	else
	{
		return n + printSum(n-1);
	}
}
int main()
{
	int n=5;
    cout<<printSum(2);
    return 0;
}
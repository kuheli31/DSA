//Print from n-1 using recursion
#include<iostream>
using namespace std;

void printNum(int i , int n)
{
	if(i==n+1) return ;
	else
	{
		printNum(i+1,n);
		cout<<i<<endl;
	}
}

int main()
{
	int n=5;
    printNum(1,n);
    return 0;
}
//Time complexity: O(n)
//Space complexity: O(n)
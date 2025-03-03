//Reverse an array using 1 pointer
#include <iostream>
using namespace std;

int reverse(int arr[] , int i , int n)
{
	if(i>=n/2) return 0;
	else
	{
		swap(arr[i] , arr[n-i-1]);
		reverse(arr,i+1,n);
	}
}

int main()
{
	int i;
	int arr[] = {1,2,3,4,5};
	int n=5;
	cout<<"Original Array:";
	for(i=0 ; i<n ; i++)
	{
		cout<<arr[i]<<" ";
	}
	reverse(arr,0,n);
	cout<<"\nReversed Array:";
	for(i=0 ; i<n ; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
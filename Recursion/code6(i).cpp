//Reverse an array using two pointers
#include<iostream>
using namespace std;

int reverse(int arr[] , int left , int right)
{
	if(left>=right) return 0;
	else
	{
		swap(arr[left] , arr[right]);
		return reverse(arr, left+1 , right-1);
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
	reverse(arr,0,n-1);
	cout<<"\nReversed Array:";
	for(i=0 ; i<n ; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
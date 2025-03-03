//Print linearly from 1-N using Recursion.
#include <iostream>
using namespace std;

void printNum(int i , int n)
{
    if(i==n+1) return;
    else
    {
        cout<<i<<endl;
        printNum(i+1 , n);
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
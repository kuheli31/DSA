//print the subsequences whose sum of subsequences is equal to target.
#include <iostream>
#include <vector>
using namespace std;

void printSum(int index, vector<int> &ds, int s, int sum, vector<int> &nums, int n)
{
    if (index == n) // Base condition: if index reaches n
    {
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // Pick the element
    ds.push_back(nums[index]);
    s += nums[index];
    printSum(index + 1, ds, s, sum, nums, n);

    // Remove the last picked element (backtrack)
    s -= nums[index];
    ds.pop_back();
    printSum(index + 1, ds, s, sum, nums, n);
}

int main()
{
    vector<int> nums = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printSum(0, ds, 0, sum, nums, n);
}

//print the first subsequence whose sum of subsequences is equal to target.
#include <iostream>
#include <vector>
using namespace std;

void printSum(int index, vector<int> &ds, int s, int sum, vector<int> &nums, int n, bool &flag)
{
    if (index == n) // Base condition: if index reaches n
    {
        if (s == sum && !flag) // Check if sum matches and first subsequence is not found yet
        {
            flag = true; // Set flag to true once the first valid subsequence is found
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    if (flag) return; // Stop recursion once the first subsequence is found

    // Pick the element
    ds.push_back(nums[index]);
    s += nums[index];
    printSum(index + 1, ds, s, sum, nums, n, flag);

    if (flag) return; // Stop recursion once the first subsequence is found

    // Remove the last picked element (backtrack)
    s -= nums[index];
    ds.pop_back();
    printSum(index + 1, ds, s, sum, nums, n, flag);
}

int main()
{
    vector<int> nums = {1, 2, 1};
    int sum = 2;
    vector<int> ds;
    bool flag = false; // Flag to indicate when the first subsequence is found

    printSum(0, ds, 0, sum, nums, nums.size(), flag);
}


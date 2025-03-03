//Print the subsequences
#include <iostream>
#include <vector>
using namespace std;

void subsequence(int index, vector<int> &nums, vector<int> &current) 
{
    int n = nums.size();
    if (index >= n) 
	{
        for (int i = 0; i < current.size(); i++) 
		{
    		cout << current[i] << " ";
		}

        cout << endl;
        return;
    }

    // Include the current element
    current.push_back(nums[index]);
    subsequence(index + 1, nums, current);
    
    // Exclude the current element
    current.pop_back();
    subsequence(index + 1, nums, current);
}

int main() 
{
    vector<int> nums = {3, 1, 2};
    vector<int> current;
    subsequence(0, nums, current);
    return 0;
}

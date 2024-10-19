#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int idx = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[idx] != nums[i])
            {
                idx++;
                nums[idx] = nums[i];
            }
        }
        return idx + 1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int results = s.removeDuplicates(nums);
    cout << results;
    return 0;
}
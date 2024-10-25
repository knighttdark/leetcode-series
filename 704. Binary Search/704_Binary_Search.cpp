#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 2;
    int result = s.search(nums, target);

    cout << result;
    return 0;
}
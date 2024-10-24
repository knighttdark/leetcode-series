#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int current_count = 0;
        int max_count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                current_count++;
            }

            if (nums[i] == 0)
            {
                if (current_count > max_count)
                {
                    max_count = current_count;
                }
                current_count = 0;
            }
        }

        if (max_count < current_count)
        {
            max_count = current_count;
        }

        return max_count;
    }
};

int main()
{

    Solution s;
    vector<int> nums = {1, 0, 1, 0, 1, 0, 0};
    int result = s.findMaxConsecutiveOnes(nums);
    cout << result;

    return 0;
}
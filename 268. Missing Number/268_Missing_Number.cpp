#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int sum = (n * (n + 1)) / 2;
        int sumArray = 0;

        for (int i = 0; i < n; i++)
        {
            sumArray += nums[i];
        }

        return sum - sumArray;
    }
};

int main()
{
    Solution s1;

    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    int result = s1.missingNumber(nums);
    cout << result;
    return 0;
}
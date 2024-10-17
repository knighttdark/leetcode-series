
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        int k;
        int ns = nums.size();

        for (int i = 0; i < ns - 1; i++)
        {
            for (int j = i + 1; j < ns; j++)
            {
                if (nums[i] > nums[j])
                {
                    k = nums[i];
                    nums[i] = nums[j];
                    nums[j] = k;
                }
            }
        }
        int sum1 = nums[ns - 1] * nums[ns - 2] * nums[ns - 3];
        int sum2 = nums[0] * nums[1] * nums[ns - 1];
        return max(sum1, sum2);
    }
};

int main()
{

    Solution s1;
    vector<int> nums = {-100, -98, -1, 2, 3, 4};

    int result = s1.maximumProduct(nums);
    cout << result;

    return 0;
}
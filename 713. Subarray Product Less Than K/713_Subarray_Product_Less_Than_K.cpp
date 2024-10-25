#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        int i = 0;
        int count = 0;
        int product = 1;

        if (k <= 1)
        {
            return 0;
        }

        for (int j = 0; j < nums.size(); j++)
        {
            product = product * nums[j];

            // Tính product tại mỗi num[j]
            // Nếu product < k --> return về số subarray
            // tại j = 0; i = 0 --> product[0] = 10 --> 10 < 100 --> có subarray [10] --> count = 1
            // tại j = 1; i = 0 --> product[1] = 10 * 5 = 50 < 100 --> có thêm subarray [5], [10, 5] --> count = 1 + (1 - 0 + 1) = 3
            // tại j = 2; i = 0 --> product[2] = 10 * 5 * 2 = 100 --> kiểm tra thấy product >= 100
            // --> phải giảm tích bằng cách chia cho nums[0] = 10 --> product = 10 và tăng i lên 1 --> i = 1
            // tại j = 2; i = 1 --> product[2] = 5 * 2 = 10 --> có subarray [2] , [5, 2] --> count = 3 + (j - i + 1) = 3 + 2 = 5;
            // tại j = 3; i = 2 --> product[3] =  5 * 2 * 6 = 60 < 100 --> [6], [5,2,6], [2,6] --> count = 5 + ( j - i + 1) = 5 + 3 = 8;

            while (product >= k && i <= j)
            {
                product = product / nums[i];
                i++;
            }

            count = count + (j - i + 1);
        }
        return count;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {10, 5, 2, 6};
    int k = 100;

    int result = s.numSubarrayProductLessThanK(nums, k);
    cout << result;

    return 0;
}
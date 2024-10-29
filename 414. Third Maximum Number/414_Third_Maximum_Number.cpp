#include <iostream>
#include <vector>
using namespace std;

class _414_Third_Maximum_Number
{
    // Input: nums = [2,2,3,1]
public:
    int thirdMax(vector<int> &nums)
    {
        long max_1 = LONG_MIN, max_2 = LONG_MIN, max_3 = LONG_MIN;
        for (int num : nums)
        {
            if (num == max_1 || num == max_2 || num == max_3)
            {
                continue; // Kiểm tra giá trị trong các biến max_1,2,3 đã tồn tại thì bỏ qua
            }

            if (num > max_1)
            {
                max_3 = max_2;
                max_2 = max_1;
                max_1 = num;
            }
            else if (num > max_2)
            {
                max_3 = max_2;
                max_2 = num;
            }
            else if (num > max_3)
            {
                max_3 = num;
            }
        }
        return max_3 == LONG_MIN ? max_1 : max_3;
    }
};

int main()
{
    _414_Third_Maximum_Number s1;
    vector<int> nums = {2, 2, 3, 1};
    int result = s1.thirdMax(nums);
    cout << result;
}
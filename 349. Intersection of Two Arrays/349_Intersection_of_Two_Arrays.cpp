#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {

        // Sử dụng 2 con trỏ
        int i = 0;
        int j = 0;
        vector<int> result;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            // Kiểm tra vị trí của nums1[i] < nums2[j] không?
            {
                i++;
            }

            //  nums1 = {1, 2, 2, 3, 4};
            //  nums2 = {2, 2, 3, 5};

            /*
                + nums1[0] = 1 < nums2[0] = 2 --> tăng i lên 1  ( i = 1)
                + nums1[1] = 2 = nums2[0] = 2 --> vào vòn else phái dưới
            */

            else if (nums1[i] > nums2[j])
            {
                j++;
            }

            else
            {
                // kiểm tra vector result nếu chưa có giá trị nums1[i] = nums2[j] thì chèn vào mảng
                if (result.empty() || result.back() != nums1[i])
                {
                    result.push_back(nums1[i]);
                }

                i++;
                j++;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;

    vector<int> nums1 = {1, 2, 2, 3, 4};
    vector<int> nums2 = {2, 2, 3, 5};

    vector<int> result = s.intersection(nums1, nums2);

    for (int num : result)
    {
        cout << num << " "; // Output: 2 3
    }

    return 0;
}
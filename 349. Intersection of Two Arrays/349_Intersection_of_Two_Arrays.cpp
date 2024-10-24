#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0;
        int j = 0;
        vector<int> result;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                i++;
            }

            else if (nums1[i] > nums2[j])
            {
                j++;
            }

            else
            {
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

    return 0;
}
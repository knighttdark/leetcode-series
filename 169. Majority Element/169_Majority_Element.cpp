#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int numSize = nums.size() / 2;
        unordered_map<int, int> countMaps;
        for (int num : nums)
        {
            countMaps[num]++;
            if (countMaps[num] > numSize)
            {
                return num;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = s.majorityElement(nums);
    cout << result;
    return 0;
}
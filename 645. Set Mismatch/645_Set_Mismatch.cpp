#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        unordered_map<int, int> countMap;
        int duplicate = -1;
        int miss = -1;

        for (int num : nums)
        {
            countMap[num]++;
        }

        for (int i = 0; i <= nums.size(); i++)
        {
            /* code */
            if (countMap[i] == 2)
            {
                duplicate = i;
            }
            else if (countMap[i] == 0)
            {
                miss = i;
            }
        }
        return {duplicate, miss};
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 2, 4};
    vector<int> result = s.findErrorNums(nums);

    // In kết quả
    cout << "Duplicate: " << result[0] << ", Missing: " << result[1] << endl;

    return 0;
}
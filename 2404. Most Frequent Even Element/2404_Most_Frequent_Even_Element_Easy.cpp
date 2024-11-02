#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        unordered_map<int, int> elementMaps;

        for (int num : nums)
        {
            if (num % 2 == 0)
            {
                elementMaps[num]++;
            }
        }
        // Duyệt qua mảng và kiểm tra số chắn --> lưu vào bảng băm

        int maxCount = 0;     // số lần xuất hiện tối đa của 1 số chẵn
        int mostFrequent = 0; // số chẵn xuất hiện nhiều nhất trong mảng

        for (auto x : elementMaps)
        {
            if (x.second > mostFrequent || (x.second == mostFrequent) && x.first < maxCount)
            {
                mostFrequent = x.second;
                maxCount = x.first;
            }

            /*
                + i = 1 --> (số chẵn : số lần xuất hiện)( 0 : 1) --- maxCount = 0; mostFrequent = 0 --> Kiểm tra điều kiện x.second > mostFrequent ( 1 > 0)
                  maxCount = 1; mostFrequent = 0;
                + i = 2 --> (2 : 2) --- Kiểm tra điều kiện x.second > mostFrequent ( 2 > 1)
                  cập nhật mostFrequent = 2; maxCount = 2;
                + i = 3 --> (4 : 2) --- Kiểm tra điều kiện x.second > mostFrequent ( 2 > 2 - False || 2 == 2 - True  && 4 < 2) -- Điều kiện này sai nên không thay đổi maxCount và mostFrequent trước đó
                Điều kiện này kiểm tra nếu 2 số chắn có số lần xuất hiện bằng nhau thì kiểm tra số chắn nào bé hơn
            */
        }

        return maxCount;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {0, 1, 2, 2, 4, 4, 1};
    int result = s.mostFrequentEven(nums);
    cout << result;
    return 0;
}
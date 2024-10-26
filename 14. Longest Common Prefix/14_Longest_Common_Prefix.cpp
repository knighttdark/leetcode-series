/*
    Solution
    + lấy từ đầu tiên của chuỗi
    + lấy kí tự đầu tiên của từ đó rồi so sánh với các kí tự các từ còn lại
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";

        for (int i = 0; i < strs[0].size(); i++)
        {
            char currentStr = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (currentStr != strs[j][i])
                {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};

int main()
{
    Solution s;
    vector<string> strs = {"flower", "flow", "flight"};

    string str = s.longestCommonPrefix(strs);

    cout << str;

    return 0;
}
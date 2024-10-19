#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int numRow = accounts.size();    // number of customer
        int numCol = accounts[0].size(); // number of bank
        int max = 0;
        for (int i = 0; i < numRow; i++)
        {
            int summCurrent = 0;
            for (int j = 0; j < numCol; j++)
            {
                summCurrent += accounts[i][j];
            }
            if (summCurrent > max)
            {
                max = summCurrent;
            }
        }
        return max;
    }
};
int main()
{
    Solution s1;
    vector<vector<int>> acccounts = {{1, 2, 3}, {3, 2, 1}};

    int result = s1.maximumWealth(acccounts);
    cout << result;
    return 0;
}
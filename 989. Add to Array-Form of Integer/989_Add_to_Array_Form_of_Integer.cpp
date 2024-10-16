#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        long long numInt = 0;
        for (int n : num)
        {
            numInt = numInt * 10 + n;
        }
        numInt += k;

        vector<int> result;

        if (numInt == 0)
        {
            result.push_back(0);
        }
        else
        {
            while (numInt > 0)
            {
                result.push_back(numInt % 10);
                numInt /= 10;
            }
            reverse(result.begin(), result.end());
        }
        return result;
    }
};

int main()
{
    Solution s1;
    vector<int> num = {2, 1, 5};
    int k = 806;

    vector<int> result = s1.addToArrayForm(num, k);

    for (int n : result)
    {
        cout << n;
    }

    return 0;
}
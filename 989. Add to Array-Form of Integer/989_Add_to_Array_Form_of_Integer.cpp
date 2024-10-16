#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> addToArrayForm(vector<int> &num, int k)
    {
        vector<int> result;
        int ns = num.size();
        int carry = 0;

        for (int i = ns - 1; i >= 0 || k > 0 || carry > 0; i--)
        {
            int digit = (i >= 0 ? num[i] : 0);

            int sum = digit + (k % 10) + carry;

            result.push_back(sum % 10);

            carry = sum / 10;

            k /= 10;
        }

        reverse(result.begin(), result.end());

        return result;
    }
};

int main()
{
    Solution s1;
    vector<int> num = {1, 2, 0, 0};
    int k = 34;

    vector<int> result = s1.addToArrayForm(num, k);

    for (int n : result)
    {
        cout << n;
    }
    return 0;
}
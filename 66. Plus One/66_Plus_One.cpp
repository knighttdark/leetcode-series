#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int ns = digits.size();
        for (int i = ns - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{
    Solution s;

    vector<int> digits1 = {9, 9};
    vector<int> result1 = s.plusOne(digits1);
    for (int d : result1)
    {
        cout << d;
    }
    cout << endl;

    return 0;
}
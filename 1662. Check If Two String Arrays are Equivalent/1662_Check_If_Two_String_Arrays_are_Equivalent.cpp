#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string result1 = "";
        string result2 = "";

        for (string s : word1)
        {
            result1 += s;
        }

        for (string s : word2)
        {
            result2 += s;
        }

        return result1 == result2;
    }
};

int main()
{
    Solution s;
    vector<string> w1 = {"a", "bc"};
    vector<string> w2 = {"ab", "c"};

    cout << s.arrayStringsAreEqual(w1, w2);

    return 0;
}
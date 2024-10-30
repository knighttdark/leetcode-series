#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr.size(); j++)
            {
                if (i != j && arr[i] == 2 * arr[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> arrss = {10, 2, 5, 4};
    bool result = s.checkIfExist(arrss);
    cout << result;
    return 0;
}
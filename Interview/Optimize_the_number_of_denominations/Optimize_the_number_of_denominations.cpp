#include <iostream>
#include <vector>

using namespace std;

class Optimize_Number
{
public:
    vector<int> bills = {100, 50, 20, 10, 5, 2, 1};
    vector<int> calculator(int x, int y)
    {
        vector<int> result;
        int total = x - y;
        for (int num : bills)
        {
            int count = total / num;
            for (int i = 0; i < count; i++)
            {
                result.push_back(num);
            }

            total %= num;
        }
        return result;
    }
};

int main()
{
    Optimize_Number s;
    int x = 100;
    int y = 1;
    vector<int> result = s.calculator(x, y);
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
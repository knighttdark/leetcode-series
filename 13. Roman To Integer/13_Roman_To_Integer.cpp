#include <iostream>
using namespace std;
#include <unordered_map>

class RomantoInt
{
public:
    int romanToInt(string s)
    {
        int ans = 0;
        unordered_map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        for (int i = 0; i < s.length(); i++)
        {
            if (romanMap[s[i]] < romanMap[s[i + 1]]) 
            {
                ans -= romanMap[s[i]];
            }
            else
            {
                ans += romanMap[s[i]];
            }
        }
        return ans;
    }
};

int main()
{
    RomantoInt r1;
    int results = r1.romanToInt("MCMXCIV");
    cout << results;

    return 0;
}
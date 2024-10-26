#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        int count[26] = {}; // Tạo một mảng 26 phần tử, đại diện tần suất xuất hiện của mỗi kí tự từ a -> z
        for (int i = 0; i < s.length(); i++)
        {
            count[s[i] - 'a']++;
            // s[i] - 'a': chuyển đổi kí tự tại vị trí i của chuỗi thành một chỉ số từ 0 -> 25 (a -> z)
            // count[s[i] - 'a']: đếm số lần kí tự xuất hiện trong mảng
            /*
             Ví dụ: chuỗi 'leetcode'
            + khi i = 0 là kí tự 'l' --> s[i] - 'a' = 'l' - 'a' = 108 - 97 = 11 --> tăng count[11] lên 1, vì đây là vị trí đại diện cho kí tự 'l'
            + khi i = 1 là kí tự 'e' --> s[i] - 'a' = 'e' - 'a' = 101 - 97 = 4 --> tăng count[e] lên 1, vì đây là kí tự đại diện cho kí tự 'e'
            + Tiếp tục lăp cho đến khi hết chuỗi
            */
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (count[s[i] - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    string str = "loveleetcode";

    int result = s.firstUniqChar(str);
    cout << result;

    return 0;
}
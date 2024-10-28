#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<pair<int, string>> people; // Sử dụng 1 vector chứa các cặp {height, name}
        for (int i = 0; i < names.size(); i++)
        {
            people.push_back({heights[i], names[i]}); // thêm từng cặp {height, name} vào vector people
        }

        sort(people.begin(), people.end(), [](pair<int, string> &a, pair<int, string> b)
             { return a.first > b.first; });

        //   sort(people.begin(), people.end(): sắp xếp lại các phần tử trong dãy
        //   [](pair<int, string> &a, pair<int, string> b:
        //   tham số a là một tham chiếu đến một cặp pair có kiểu int và string
        //   tham số b cũng là một tham chiếu đến một cặp khác trong vector
        // Mục đích: so sánh 2  cặp a và b để xác định thứ tự của chúng, khi kq trả về true chúng ta yêu cầu sort sắp xếp các cặp theo chiều cao giảm dần
        // a.first và b.first là lấy chiều cao của cặp a và b
        vector<string> sortName;
        for (auto &p : people) // sử dụng 'auto' để tự động xác định kiểu dữ liêu của p, trong trường hợp này pair<int, string>
        // & nghĩa là p tham chiếu đến phần tử trong vector
        {
            sortName.push_back(p.second);
            // p.second: các truy cập phần tử thứ 2 ( string - names)
        }
        return sortName;
    }
};

int main()
{
    Solution s;
    vector<string> n = {"Mary", "John", "Emma"};
    vector<int> h = {180, 165, 170};

    vector<string> result = s.sortPeople(n, h);

    for (string name : result)
    {
        cout << name << " ";
    }
    return 0;
}
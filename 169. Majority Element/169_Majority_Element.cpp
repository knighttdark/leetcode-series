#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    /* // Sử dụng bẳng băm
        static int majorityElement(vector<int> &nums)
        {
            int numSize = nums.size() / 2;
            unordered_map<int, int> countMaps;
            for (int num : nums)
            {
                countMaps[num]++;
                if (countMaps[num] > numSize)
                {
                    return num;
                }
            }
            return -1;
        }
    */
    static int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            /*
                Sử dụng biến count để tính số lần xuất hiện của giá trị hiện tại
                + Lúc đầu khởi tạo thì count và result sẽ bằng 0; nên kiểm tra count = 0 không( chắc chắn bằng 0), sau đó tăng count lên (nums[i], i = 0)
                + Sau i =0 thì count = 1 và result sẽ bằng giá trị đầu tiên của mảng
                +  Sau đó duyệt mảng i =1, i =2,.... nếu bẳng result thì count sẽ tăng lên, nếu không thì count sẽ giảm và result sẽ gán bằng giá trị khác

                [2,2,1,1,1,2,2]
                + count == 0 ? result = nums[0] = 2 : count = 1
                + i = 1 --- result(=2) = nums[1](=2) --> tăng count lên: count = 2;
                + i = 2 --- result(=2) != nums[2](=1) --> giảm count xuông: count = 1;
                + i = 3 --- result(=2) != nums[3](=1) --> giảm count xuông: count = 0;

                + i =4; gán result = nums[4] = 1 và count = 1;
                + i =5 ---result(=1) != nums[5])(=2) --> giảm count xuống: count = 0;
                + i =6; gán result = nums[6](=2) và count = 1;

            */
            if (count == 0)
            {
                result = nums[i];
                count = 1;
            }
            else if (result = nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int result = s.majorityElement(nums);
    cout << result;
    return 0;
}

/*
1. Sử dụng bảng băm để lưu số lần xuất hiện các phần tử trong mảng
    - Sau đó so sánh với kích thước của mảng  / 2, nếu lớn hơn thì trả về giá trị đó num;

*/
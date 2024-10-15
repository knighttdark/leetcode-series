#include <iostream>
#include <vector>
using namespace std;

class FindNumber
{
public:
    static int findNumbers(vector<int> &nums)
    {
        int count = 0;

        for (int num : nums)
        {
            int temp = num;
            int digital = 0;

            while (temp > 0)
            {
                temp /= 10;
                digital++;
            }

            if (digital % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    FindNumber findnumber;

    vector<int> nums1 = {12, 345, 2, 6, 7896};
    cout << "Output for nums1: " << findnumber.findNumbers(nums1) << endl;

    vector<int> nums2 = {555, 901, 482, 1771};
    cout << "Output for nums2: " << findnumber.findNumbers(nums2) << endl;

    return 0;
}

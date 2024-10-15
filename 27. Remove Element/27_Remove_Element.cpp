#include <iostream>
#include <vector>
using namespace std;

class RemoveElement
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int newIdx = 0; // New index of new array
        for (int i = 0; i < nums.size(); i++)
        {
            if (val != nums[i])
            {
                nums[newIdx] = nums[i];
                newIdx++;
            }
        }
        return newIdx;
    }
};

int main()
{
    RemoveElement RE1;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newSize = RE1.removeElement(nums, val);

    for (int i = 0; i < newSize; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
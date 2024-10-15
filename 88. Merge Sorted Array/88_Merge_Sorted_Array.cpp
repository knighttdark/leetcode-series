#include <iostream>
#include <vector>
using namespace std;

class Merge_Sort
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        for (int i = 0; i < n; i++) // Browe each element of nums2
        {
            insert(nums2[i], nums1, m); // Insert element of nums2 into nums1
            m++;                        // Increase m when insert element into nums1
        }
    }

    void insert(int x, vector<int> &nums1, int m)
    {
        bool isFind = false;
        for (int i = 0; i < m; i++) // Browe each element of nums1
        {
            if (nums1[i] > x) // Find location to insert x
            {
                isFind = true;
                for (int j = m - 1; j >= i; j--)
                {
                    nums1[j + 1] = nums1[j]; // Shifts elements to the right
                }
                nums1[i] = x; // Insert x into the found position
                break;
            }
        }

        if (isFind == false)
        {
            nums1[m] = x; // If no ssuitable location is found, add it at the end
        }
    }
};

int main()
{
    Merge_Sort mergesort;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    mergesort.merge(nums1, 3, nums2, 3);

    for (int num : nums1)
    {
        cout << num << " ";
    }

    return 0;
}
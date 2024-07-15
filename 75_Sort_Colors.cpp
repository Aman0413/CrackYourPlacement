#include <vector>

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i = 0;               // red
        int j = 0;               // white
        int k = nums.size() - 1; // blue

        while (j <= k)
        {

            if (nums[j] == 1)
                j++;
            else if (nums[j] == 2)
            {
                swap(nums[j], nums[k]);
                k--;
            }
            else
            {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};
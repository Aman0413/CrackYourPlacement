#include <vector>
#include <set>

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> st;

        for (auto &e : nums)
        {
            if (!st.contains(e))
            {
                st.insert(e);
            }
        }

        int i = 0;
        for (auto &e : st)
        {
            nums[i] = e;
            i++;
        }

        return st.size();
    }
};
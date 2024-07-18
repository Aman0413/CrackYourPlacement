class Solution
{
public:
    vector<int> bruteForce(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<int> ans;

        for (auto &e : nums)
        {
            mp[e]++;
        }

        for (auto &e : mp)
        {
            if (e.second > 1)
                ans.push_back(e.first);
        }

        return ans;
    }
    vector<int> findDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {

            int num = abs(nums[i]);
            int idx = num - 1;

            if (nums[idx] < 0)
            {
                ans.push_back(num);
            }
            else
            {
                nums[idx] *= -1;
            }
        }

        return ans;
    }
};
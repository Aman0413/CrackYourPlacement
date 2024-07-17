class Solution
{
public:
    vector<int> optimize(vector<int> &nums, int target)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<int> ans(2);

        for (int i = 0; i < n; i++)
        {
            int key = target - nums[i];
            if (mp.find(key) != mp.end())
            {
                ans[0] = i;
                ans[1] = mp[key];
                return ans;
            }
            mp[nums[i]] = i;
        }

        return ans;
    }
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<int> ans(2);

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                if (nums[i] + nums[j] == target)
                {
                    ans[0] = i;
                    ans[1] = j;
                    break;
                }
            }
        }

        return ans;
    }
};
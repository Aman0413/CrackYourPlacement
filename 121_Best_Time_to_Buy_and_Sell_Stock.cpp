class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();

        int mini = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < n; i++)
        {
            int curProfit = prices[i] - mini;
            maxProfit = max(curProfit, maxProfit);
            mini = min(mini, prices[i]);
        }

        return maxProfit;
    }
};
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0;
        int r = height.size() - 1;
        int area = 0;
        int maxArea = 0;

        while (l < r)
        {
            area = (r - l) * min(height[l], height[r]);
            if (area > maxArea)
            {
                maxArea = area;
            }
            if (height[l] > height[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return maxArea;
    }
};
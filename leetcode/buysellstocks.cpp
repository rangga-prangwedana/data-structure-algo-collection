class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1, maks = 0;
        int n = prices.size();
        while (right < n)
        {
            if (prices[left] < prices[right])
            {
                maks = max(maks, prices[right] - prices[left]);
            }
            else
            {
                left = right;
            }
            right++;
        }
        return maks;
    }
};

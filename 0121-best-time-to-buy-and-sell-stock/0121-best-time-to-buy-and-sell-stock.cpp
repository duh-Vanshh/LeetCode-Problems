class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;

        int low = 0;
        int high = low;

        while (high < n) {
            int profit = prices[high] - prices[low];
            if (maxProfit < profit) {
                maxProfit = profit;
            }

            if (prices[high] < prices[low]) {
                low = high;
            }

            high++;
        }

        return maxProfit;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int cheapest = 99999999;
        int profit = 0;
        int n=prices.size();
        for( int i=0;i<n;i++)
        {
            cheapest = min(cheapest,prices[i]);
            profit = max(profit, (prices[i]-cheapest));
        }
        return profit;
    }
};
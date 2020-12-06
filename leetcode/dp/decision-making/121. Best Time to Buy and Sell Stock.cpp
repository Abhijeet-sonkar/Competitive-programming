class Solution {
public:
    int maxProfit(vector<int>& prices) {


        int n=prices.size();
        int minP;
        minP=prices[0];
        int ans=0;
        for (int i = 1; i < n; i++)
        {
            ans=max(ans,prices[i]-minP);
            minP=min(minP,prices[i]);
        }
        
        return ans;
    }
};
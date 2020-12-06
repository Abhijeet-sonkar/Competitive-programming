class Solution {
public:
    int rob(vector<int>& nums) {
        
        
        int maxAmt[105][2];
        for(int i=0;i<105;i++)
        {
            for(int j=0;j<2;j++)
                maxAmt[i][j]=0;
        }
        int n=nums.size();
        if(n==0) return 0;
        maxAmt[0][1]=nums[0];
        maxAmt[0][0]=0;
        for(int i=1;i<nums.size();i++)
        {
            maxAmt[i][1]=max(maxAmt[i-1][0]+nums[i],maxAmt[i-1][1]);
            
            maxAmt[i][0]=maxAmt[i-1][1];
        }
        
       return max(maxAmt[n-1][0],maxAmt[n-1][1]);
    }
};

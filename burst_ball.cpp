class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        if(n==0) return 0;
        for(int len=1;len<=n;len++){
            for(int i=0;i<=n-len;i++){
                int j=i+len-1;
                for(int k=i;k<=j;k++){
                    // i->k && k->j
                    int leftval = 1;
                    int rightval = 1;
                    if(i!=0) leftval=nums[i-1];
                    if(j!=n-1) rightval=nums[j+1];

                    int before = 0;
                    int after = 0;
                    if(k!=i) before = dp[i][k-1];
                    if(k!=j) after = dp[k+1][j];

                    dp[i][j]=max(dp[i][j],before+after+leftval*rightval*nums[k]);
                }
            }
        }

        return dp[0][n-1];

    }
};


class Solution {
public:
    int coinChange(vector<int>&nums, int amount) {
        int n=nums.size();
        int dp[n+1][amount+1];
        if(amount==0){
            return 0;
        }
        for(int i=0;i<n+1;i++){
            for(int j=0;j<amount+1;j++){
                if(i==0){
                    dp[i][j]=1e4;
                }
                else if(j==0){
                    dp[i][j]=0;
                }
                else if(nums[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }else{
                    dp[i][j]=min(1+dp[i][j-nums[i-1]],dp[i-1][j]);
                }
            }
        }
        if(dp[n][amount]>1e3){
            return -1;
        }
        return dp[n][amount];
    }
};
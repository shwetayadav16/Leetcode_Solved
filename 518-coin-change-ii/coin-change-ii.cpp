class Solution {
public:
int helper(vector<int>& coins,int i, int amount,vector<vector<int>>&dp){
    if(amount==0) return 1;
    if(amount<0) return 0;
    if(i<0) return 0;
    if(dp[i][amount]!=-1){
        return dp[i][amount];
    }
    return dp[i][amount]=helper(coins,i-1,amount,dp)+helper(coins,i,amount-coins[i],dp);
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return helper(coins,n-1,amount,dp);
    }
};
class Solution {
public:
int solve(vector<int>& nums,int i,int p, vector<vector<int>>&dp){
    if(i>=nums.size()) return 0;
    int take=0;
    if(dp[i][p+1]!=-1){
        return dp[i][p+1];
    }
    if(p==-1||nums[i]>nums[p]){
        take=1+solve(nums,i+1,i,dp);
    }
    int skip=solve(nums,i+1,p,dp);
    return dp[i][p+1]=max(take,skip);
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int p=-1;
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(nums,0,p,dp);
    }
};
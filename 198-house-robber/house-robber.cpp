class Solution {
public:
int robbing(vector<int>&nums,int i,vector<int>&dp){
    if(i>=nums.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int take=nums[i]+robbing(nums,i+2,dp);
    int skip=robbing(nums,i+1,dp);
    return dp[i]=max(take,skip);
}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return robbing(nums,0,dp);
    }
};
class Solution {
public:
int helper(vector<int>&dp,int n){
    if(n==0||n==1||n==2) return n;
    if(dp[n]!=-1){
        return dp[n];
    }
    int option1=helper(dp,n-1);
    int option2=helper(dp,n-2);
    return dp[n]=option1+option2;
}
    int climbStairs(int n) {
       vector<int>dp(n+1,-1);
       return helper(dp,n);
    }
};
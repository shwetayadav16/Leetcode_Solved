class Solution {
public:

int  solve(string &t1,string &t2,int i1,int i2,vector<vector<int>>&dp){
    //base case
    if(i1>=t1.size()||i2>=t2.size()) return 0;
    //induction
    if(dp[i1][i2]!=-1) return dp[i1][i2];
    if(t1[i1]==t2[i2]){
        return dp[i1][i2]=1+solve(t1,t2,i1+1,i2+1,dp);
    }
    return dp[i1][i2]=max(solve(t1,t2,i1+1,i2,dp),solve(t1,t2,i1,i2+1,dp));
}
    int longestCommonSubsequence(string text1, string text2) {
        int maxLen=0;
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        maxLen=solve(text1,text2,0,0,dp);
        return maxLen;
    }
};
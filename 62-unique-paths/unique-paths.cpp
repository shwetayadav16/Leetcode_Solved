class Solution {
public:
int all_poss(int i, int j,int m, int n,vector<vector<int>>&dp){
//base cond
if(i==m-1&&j==n-1) return 1;
if(i>m-1|| j>n-1) return 0;
if(dp[i][j]!=-1) return dp[i][j];
int right=all_poss(i,j+1,m,n,dp);
int down=all_poss(i+1,j,m,n,dp);
return dp[i][j]=right+down;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n,-1));
        return all_poss(0,0,m,n,dp);
    }
};
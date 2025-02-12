class Solution {
public:
int helper(int n,vector<int>&ans){
    if(n<2){
            return n;
        }
        if(ans[n]!=-1){
            return ans[n];
        }
        else{
            ans[n]=helper(n-1,ans)+helper(n-2,ans);
            return ans[n];
        }
}
    int fib(int n) {
        vector<int>ans(n+1,-1);
        int result=helper(n,ans);
        return result;
    }
};
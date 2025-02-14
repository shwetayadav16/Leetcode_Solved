class Solution {
public:
    int func(string s, int ind,vector<int>&memo){
        if(ind == s.length()) return 1;

        if(s[ind] == '0') return 0;

        if (memo[ind] != -1) return memo[ind];

        int ways = func(s, ind+1,memo);
        if(ind+1 < s.size() && (s[ind] == '1' || (s[ind] == '2' && s[ind+1] <= '6'))){
            ways += func(s, ind+2,memo);
        }
        return memo[ind] = ways;
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int>memo(n,-1);
        return func(s, 0,memo);
    }
};
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>result(n+1,0);
        for(int i=0;i<=n;i++){
            int count=__builtin_popcount(i);
            result[i]=count;
        }
        return result;
    }
};
class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long m=n;
        if(m==0) return false;
        if((m&(m-1))==0) return true;
        else return false;
    }
};
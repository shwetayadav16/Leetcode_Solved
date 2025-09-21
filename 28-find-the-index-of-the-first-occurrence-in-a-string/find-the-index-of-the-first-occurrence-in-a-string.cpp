class Solution {
public:
//brute force: two pointer
//optimal: using substr
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        for(int i=0;i<n;i++){
            if(needle==haystack.substr(i,m)){
                return i;
            }
        }
        return -1;
    }
};
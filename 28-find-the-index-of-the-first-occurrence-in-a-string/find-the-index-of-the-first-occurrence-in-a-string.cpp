class Solution {
public:
//brute force: two pointer
//optimal: using substr
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
            if(haystack[i+j]!=needle[j]){
                break;
            }
            if(j==m-1){
            return i;
           }
           }
        }
        return -1;
    }
};
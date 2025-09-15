class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int len=needle.size();
        for(int i=0;i<n;i++){
           string check= haystack.substr(i,len);
           if(check==needle){
           return i;
           break;
           }
        }
        return -1;
    }
};
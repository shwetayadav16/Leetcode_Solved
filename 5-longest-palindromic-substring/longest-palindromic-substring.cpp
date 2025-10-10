class Solution {
public:
void expand(string &s,int &maxLen,int &start,int left,int right){
    while(left>=0 && right<s.size() && s[left]==s[right]){
        //because we assumed that it is center then we expand our pointer
        left--;
        right++;
    }
    int len=right-left-1;//here, -1 to maintain diff because it left become negative and right become one more postive then 2 length aur bandh gayi but thta is not true length so we subtract 1
    
    //now to maintain the maxlen and start pointer
    if(len>maxLen){
        maxLen=len;
        start=left+1;
    }
}
    string longestPalindrome(string s) {
        int n=s.size();
        int maxLen=0;
        int start=0;
        for(int i=0;i<n;i++){
            expand(s,maxLen,start,i,i);//to check odd palindrome substring
            expand(s,maxLen,start,i,i+1);//to check even palindrome substring
        }
        return s.substr(start,maxLen);
    }
};
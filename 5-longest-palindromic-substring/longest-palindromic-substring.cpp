class Solution {
public:
//brute force
bool isPal(string &s,int i,int j){//start=i and j=end
    while(i<j){
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}
    string longestPalindrome(string s) {
        int n=s.size();
        int start;
        int longpal=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPal(s,i,j)&&(j-i+1)>longpal){
                    start=i;
                    longpal=j-i+1;
                }
            }
        }
        return s.substr(start,longpal);
    }
};
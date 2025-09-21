class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int end=n-1;
        //find the first char where which is not equal to space=' '
        while(end>=0&&s[end]==' '){
            end--;
        }
        //Now,you have find the substring from start
        int start=end;
        while(start>=0&&s[start]!=' '){
            start--;
        }
        return end-start;
    }
};
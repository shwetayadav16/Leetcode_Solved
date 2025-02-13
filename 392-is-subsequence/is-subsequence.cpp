class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        if(s.size()>t.size()) return false;
        while(i<s.size()&&j<t.size()){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
    return i==s.length();
    }
};
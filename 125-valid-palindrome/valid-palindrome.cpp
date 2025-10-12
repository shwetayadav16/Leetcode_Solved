class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        if(n==1) return true;//work for non-alphanumeric and single element in the string
         for (auto &ch : s) {
            ch = tolower(ch);
        }
        int i=0,j=n-1;
        while(i<j){
            if(!isalnum(s[i])){
                i++;
                continue;
                //continue is necessary because nahi toh age ke case chal jayege aur match nahi toh age badh jayega jaise---abb,,a--do baar while mein i++ hoga
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(s[i]!=s[j] ){
                return false;            
            }
            i++;
            j--;
        }
        return true;
    }
};
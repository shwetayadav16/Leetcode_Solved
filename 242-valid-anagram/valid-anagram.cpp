class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        vector<int>char_arr(26,0); 
        for(int i=0;i<n;i++){
            char_arr[s[i]-'a']++;
        }
        for(char ch:t){
            char_arr[ch-'a']--;
            if(char_arr[ch-'a']<0){
                return false;
            }
        }
        return true;
    }
};
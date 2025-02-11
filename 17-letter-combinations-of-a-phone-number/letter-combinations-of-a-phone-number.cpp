class Solution {
public:
    void combos(int ind, string digits, string str, vector<string>&ans,
                unordered_map<char, string>& mp) {
        if (ind == digits.size()) {
            ans.push_back(str);
            return;
        }
        char d=digits[ind];
        string letters=mp[d];
        for(char it:letters){
            combos(ind+1,digits,str+it,ans,mp);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.empty()) return ans;
        unordered_map<char, string> mp = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"},
                                      {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
                                      {'8', "tuv"}, {'9', "wxyz"}};
        combos(0,digits,"", ans, mp);
        return ans;
    }
};
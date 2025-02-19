class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;

        int n = s.length(), m = t.length();

        // Populate frequency map for string t
        for (char& c : t)
            mp[c]++;

        int matched = 0, subStrStart = 0, minLen = n + 1, i = 0;
        for (int j = 0; j < n; j++) {  
            char rightChar = s[j];
            if (mp.find(rightChar) != mp.end()) {
                mp[rightChar]--;
                if (mp[rightChar] >= 0)
                    matched++;
            }

            // Try shrinking the window when all required characters are matched
            while (matched == m) {
                if (j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    subStrStart = i;
                }

                char leftChar = s[i];
                i++;
                if (mp.find(leftChar) != mp.end()) {
                    if (mp[leftChar]==0) {
                        matched--;
                    }
                    mp[leftChar]++;
                }
            }
        }

        return minLen > n ? "" : s.substr(subStrStart, minLen);
    }
};
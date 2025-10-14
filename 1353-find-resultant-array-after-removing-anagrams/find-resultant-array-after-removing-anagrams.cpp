class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
       vector<string> result;
    string prev = "";

    for (string word:words) {
        string key = word;
        sort(key.begin(), key.end());
        if (key == prev) continue;
        result.push_back(word);
        prev = key;
    }
    return result;
    }
};
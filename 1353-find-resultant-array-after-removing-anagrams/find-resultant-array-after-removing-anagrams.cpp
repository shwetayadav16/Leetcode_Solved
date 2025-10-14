class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
    string prevKey = "";

    for (string word : words) {
        string key = word;
        sort(key.begin(), key.end());

        if (key == prevKey) continue;
        result.push_back(word);
        prevKey = key;
    }
    return result;
    }
};
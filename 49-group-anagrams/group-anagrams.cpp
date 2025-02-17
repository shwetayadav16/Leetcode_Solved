class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for (string str : strs) {
            vector<int> count(26, 0); // Frequency array for 'a' to 'z'

            for (char c : str) {
                count[c - 'a']++; // Count frequency
            }

            // Convert frequency array to a unique string key
            string key = "";
            for (int num : count) {
                key += to_string(num) + "#"; // Example: "1#0#2#..."
            }

            // Group words by key
            map[key].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& pair : map) {
            result.push_back(pair.second);
        }

        return result;
    }
};

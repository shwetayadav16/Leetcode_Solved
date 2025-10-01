class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);   // create string stream from s
        string word;
        while (ss >> word) {  // extract words separated by spaces
            // word keeps updating, last word will remain
        }
        return word.size();
    }
};
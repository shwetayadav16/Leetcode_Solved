class Solution {
public:
bool isAnagram(string word1,string word2){
    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());
    return word1==word2;
}
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>res;
        res.push_back(words[0]);
        for(int i=1;i<n;i++){
            if(isAnagram(words[i],res.back())){
                continue;
            }
            res.push_back(words[i]);
        }
        return res;
    }
};
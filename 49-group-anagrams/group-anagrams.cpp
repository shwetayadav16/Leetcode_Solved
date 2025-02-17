class Solution {
public:
bool isValidAnagram(string &s, string &t) {
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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<bool>visited(n,false);
        vector<vector<string>>result;
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            vector<string>group;
            group.push_back(strs[i]);
            visited[i]=true;
            for(int j=i+1;j<n;j++){
                if(isValidAnagram(strs[i],strs[j])&& !visited[j]){
                    group.push_back(strs[j]);
                    visited[j]=true;
                }
            }
           
            result.push_back(group);
        }
        return result;
    }
};
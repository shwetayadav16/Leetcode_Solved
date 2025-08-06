class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(auto a:arr){
            string key=a;
            sort(key.begin(),key.end());
            if(mp.find(key)==mp.end()){
                vector<string>v;
                v.push_back(a);
                mp[key]=v;
            }
            else{
                mp[key].push_back(a);
            }
        }
        for(auto i:mp){
            vector<string>v=i.second;
            ans.push_back(v);
        }
        return ans;
    }
};
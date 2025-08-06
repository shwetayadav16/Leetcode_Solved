class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int a:nums){
            mp[a]++;
        }
        for(auto i:mp){
            if(i.second>1){
                return true;
                break;
            }
        }
        return false;
    }
};
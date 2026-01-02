class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int total_n=nums.size();
        int half_size=total_n/2;
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second==half_size){
                return i.first;
            }
        }
        return 0;
    }
};
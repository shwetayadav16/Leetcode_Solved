class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //brute force
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>n/2)
            return i.first;
        }
        return -1;
    }
};
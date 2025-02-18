class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int,int>mp;
        int ans=0;
        for(int i:nums1){
            for(int j:nums2){
                mp[i+j]++;
            }
        }
        for(int k:nums3){
            for(int l:nums4){
                ans+=mp[-(k+l)];
            }
        }
        return ans;
    }
};
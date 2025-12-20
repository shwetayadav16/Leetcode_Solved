class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //brute force
        //TC: O(nlogn)---in worst case when m=n
        //SC: O(n)
        unordered_map<int,int>mp;
        //n times
        for(int i:nums){
            mp[i]++;
        }
        vector<pair<int,int>>v(mp.begin(),mp.end());
        //O(mlogm)--here m is the unique element in the map
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        vector<int>ans;
        //k times
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
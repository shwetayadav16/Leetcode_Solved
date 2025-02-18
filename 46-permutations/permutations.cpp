class Solution {
public:
unordered_set<int>st;
void solve(vector<int>&temp,vector<int>& nums,vector<vector<int>>&result){
    int n=nums.size();
    if(temp.size()==n){
            result.push_back(temp);
            return;
    }
    for(int i=0;i<n;i++){
        if(st.find(nums[i])==st.end()){
            temp.push_back(nums[i]);
            st.insert(nums[i]);
            solve(temp,nums,result);
            temp.pop_back();
            st.erase(nums[i]);
        }
    }
    return;
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp={};
        vector<vector<int>>result;
        solve(temp,nums,result);
        return result;
    }
};
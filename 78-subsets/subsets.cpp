class Solution {
public:
void solve(vector<int>& nums,int i,vector<int>&path,vector<vector<int>>&result){
    if(i>=nums.size()) 
       return result.push_back(path);

        path.push_back(nums[i]);
        solve(nums,i+1,path,result);
        path.pop_back();
        solve(nums,i+1,path,result);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>path;
        solve(nums,0,path,result);
        return result;
    }
};
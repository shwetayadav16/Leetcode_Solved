class Solution {
public:
int helper(vector<int>& nums, int target,int i,int currsum){
    if(i==nums.size()){
        return  currsum==target?1:0;
    }
    int add=helper(nums,target,i+1,currsum+nums[i]);
    int sub=helper(nums,target,i+1,currsum-nums[i]);
    return add+sub;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(nums,target,0,0);
    }
};
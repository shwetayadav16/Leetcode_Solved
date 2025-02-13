class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 0) return 0; // Edge case: No house to rob
        if (n == 1) return nums[0]; // Edge case: Only one house
        int prev1=nums[0];
        int prev2=max(nums[0],nums[1]);
        int curr=0;
        for(int i=2;i<n;i++){
            curr=max(nums[i]+prev1,prev2);
            prev1=prev2;
            prev2=curr;
        }
        return prev2;
    }
};
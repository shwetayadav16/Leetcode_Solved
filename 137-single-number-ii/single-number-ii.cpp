class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+3){
           if(i==n-1||nums[i]!=nums[i+1]) return nums[i];
        }
        return 0;
    }
};